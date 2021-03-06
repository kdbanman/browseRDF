/**
 *
 * This file is part of Tulip (www.tulip-software.org)
 *
 * Authors: David Auber and the Tulip development Team
 * from LaBRI, University of Bordeaux 1 and Inria Bordeaux - Sud Ouest
 *
 * Tulip is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * Tulip is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 */
#ifndef _TLPMUTABLECONTAINER_
#define _TLPMUTABLECONTAINER_

#include <deque>
#include <iostream>
#include <string>
#include <cassert>
#include <tulip/tulipconf.h>
#include <tulip/tuliphash.h>
#include <tulip/StoredType.h>
#include <tulip/DataSet.h>
#include <tulip/Iterator.h>

namespace tlp {

#ifndef DOXYGEN_NOTFOR_DEVEL
//===================================================================
// we first define an interface
// to make easier the iteration on values
// stored in a MutableContainer for the GraphUpdatesRecorder
class IteratorValue: public Iterator<unsigned int> {
public:
  IteratorValue() {}
  virtual ~IteratorValue() {}
  virtual unsigned int nextValue(DataMem&) = 0;
};
#endif // DOXYGEN_NOTFOR_DEVEL
//===================================================================
template <typename TYPE>
class MutableContainer {
  friend class MutableContainerTest;
  friend class GraphUpdatesRecorder;
public:
  MutableContainer();
  ~MutableContainer();
  /**
   * set the default value
   */
  void setAll(const TYPE &value);
  /**
   * set the value associated to i
   */
  void set(const unsigned int i, const TYPE &value);
  /**
   * add val to the value associated to i
   */
  void add(const unsigned int i, TYPE val);
  /**
   * get the value associated to i
   */
  typename StoredType<TYPE>::ReturnedConstValue get(const unsigned int i) const;
  /**
   * get the value associated to i and indicates if it is not the default one
   */
  typename StoredType<TYPE>::ReturnedValue get(const unsigned int i, bool& isNotDefault) const;
  /**
   * get the default value
   */
  typename StoredType<TYPE>::ReturnedValue getDefault() const;
  /**
   * return if the value associated to i is not the default one
   */
  bool hasNonDefaultValue(const unsigned int i) const;
  /**
   * return a pointer on an iterator for all the elements whose associated value
   * is equal to a given value or different from the default value.
   * A null pointer is returned in case of an iteration on all the elements
   * whose value is equal to the default value.
   */
  Iterator<unsigned int>* findAll(const TYPE &value, bool equal = true) const;
private:
  MutableContainer(const MutableContainer<TYPE> &) {}
  void operator=(const MutableContainer<TYPE> &) {}
  void vecttohash();
  void hashtovect();
  void compress(unsigned int min, unsigned int max, unsigned int nbElements);
  inline void vectset(const unsigned int i, typename StoredType<TYPE>::Value value);
  IteratorValue* findAllValues(const TYPE &value, bool equal = true) const;
private:
  std::deque<typename StoredType<TYPE>::Value> *vData;
  TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value> *hData;
  unsigned int minIndex,maxIndex;
  typename StoredType<TYPE>::Value defaultValue;
  enum State { VECT=0, HASH=1 };
  State state;
  unsigned int elementInserted;
  double ratio;
  bool compressing;
};
#ifndef DOXYGEN_NOTFOR_DEVEL
//===================================================================
template<typename TYPE>
MutableContainer<TYPE>::MutableContainer(): vData(new std::deque<typename StoredType<TYPE>::Value>()),
  hData(NULL), minIndex(UINT_MAX), maxIndex(UINT_MAX), defaultValue(StoredType<TYPE>::defaultValue()), state(VECT), elementInserted(0),
  ratio(double(sizeof(typename StoredType<TYPE>::Value)) / (3.0*double(sizeof(void *))+double(sizeof(typename StoredType<TYPE>::Value)))),
  compressing(false) {
}
//===================================================================
template <typename TYPE>
MutableContainer<TYPE>::~MutableContainer() {
  //  cerr << __PRETTY_FUNCTION__ << endl;
  switch (state) {
  case VECT:

    if (StoredType<TYPE>::isPointer) {
      // delete stored values
      typename std::deque<typename StoredType<TYPE>::Value>::const_iterator it =
        vData->begin();

      while (it!= vData->end()) {
        if ((*it) != defaultValue)
          StoredType<TYPE>::destroy(*it);

        ++it;
      }
    }

    delete vData;
    vData = NULL;
    break;

  case HASH:

    if (StoredType<TYPE>::isPointer) {
      // delete stored values
      typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::const_iterator it = hData->begin();

      while (it!= hData->end()) {
        StoredType<TYPE>::destroy((*it).second);
        ++it;
      }
    }

    delete hData;
    hData = NULL;
    break;

  default:
    assert(false);
    std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    break;
  }

  StoredType<TYPE>::destroy(defaultValue);
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::setAll(const TYPE &value) {
  //  cerr << __PRETTY_FUNCTION__ << endl;
  switch (state) {
  case VECT:

    if (StoredType<TYPE>::isPointer) {
      // delete stored values
      typename std::deque<typename StoredType<TYPE>::Value>::const_iterator it =
        vData->begin();

      while (it!= vData->end()) {
        if ((*it) != defaultValue)
          StoredType<TYPE>::destroy(*it);

        ++it;
      }
    }

    vData->clear();
    break;

  case HASH:

    if (StoredType<TYPE>::isPointer) {
      // delete stored values
      typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::const_iterator it = hData->begin();

      while (it!= hData->end()) {
        StoredType<TYPE>::destroy((*it).second);
        ++it;
      }
    }

    delete hData;
    hData = NULL;
    vData = new std::deque<typename StoredType<TYPE>::Value>();
    break;

  default:
    assert(false);
    std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    break;
  }

  StoredType<TYPE>::destroy(defaultValue);
  defaultValue = StoredType<TYPE>::clone(value);
  state = VECT;
  maxIndex = UINT_MAX;
  minIndex = UINT_MAX;
  elementInserted = 0;
}
//===================================================================
// we implement 2 templates with IteratorValue as parent class
// for the two kinds of storage used in a MutableContainer
// one for vector storage
template <typename TYPE>
class IteratorVect : public IteratorValue {
public:
  IteratorVect(const TYPE &value, bool equal, std::deque<typename StoredType<TYPE>::Value> *vData, unsigned int minIndex):
    _value(value),
    _equal(equal),
    _pos(minIndex),
    vData(vData),
    it(vData->begin()) {
    while (it!=(*vData).end() &&
           StoredType<TYPE>::equal((*it), _value) != _equal) {
      ++it;
      ++_pos;
    }
  }
  bool hasNext() {
    return (_pos<UINT_MAX && it!=(*vData).end());
  }
  unsigned int next() {
    unsigned int tmp = _pos;

    do {
      ++it;
      ++_pos;
    }
    while (it!=(*vData).end() &&
           StoredType<TYPE>::equal((*it), _value) != _equal);

    return tmp;
  }
  unsigned int nextValue(DataMem& val) {
    ((TypedValueContainer<TYPE>&) val).value = StoredType<TYPE>::get(*it);
    unsigned int pos = _pos;

    do {
      ++it;
      ++_pos;
    }
    while (it!=(*vData).end() &&
           StoredType<TYPE>::equal((*it), _value) != _equal);

    return pos;
  }
private:
  const TYPE _value;
  bool _equal;
  unsigned int _pos;
  std::deque<typename StoredType<TYPE>::Value> *vData;
  typename std::deque<typename StoredType<TYPE>::Value>::const_iterator it;
};

// one for hash storage
template <typename TYPE>
class IteratorHash : public IteratorValue {
public:
  IteratorHash(const TYPE &value, bool equal, TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value> *hData):
    _value(value),
    _equal(equal),
    hData(hData) {
    it=(*hData).begin();

    while (it!=(*hData).end() &&
           StoredType<TYPE>::equal((*it).second,_value) != _equal)
      ++it;
  }
  bool hasNext() {
    return (it!=(*hData).end());
  }
  unsigned int next() {
    unsigned int tmp = (*it).first;

    do {
      ++it;
    }
    while (it!=(*hData).end() &&
           StoredType<TYPE>::equal((*it).second,_value) != _equal);

    return tmp;
  }
  unsigned int nextValue(DataMem& val) {
    ((TypedValueContainer<TYPE>&) val).value =
      StoredType<TYPE>::get((*it).second);
    unsigned int pos = (*it).first;

    do {
      ++it;
    }
    while (it!=(*hData).end() &&
           StoredType<TYPE>::equal((*it).second,_value) != _equal);

    return pos;
  }
private:
  const TYPE _value;
  bool _equal;
  TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value> *hData;
  typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::const_iterator it;
};
//===================================================================
// this method is private and used as is by GraphUpdatesRecorder class
// it is also used to implement findAll
template <typename TYPE>
IteratorValue* MutableContainer<TYPE>::findAllValues(const TYPE &value,
    bool equal) const {
  if (equal &&
      StoredType<TYPE>::equal(defaultValue, value))
    // error
    return NULL;
  else {
    switch (state) {
    case VECT:
      return new IteratorVect<TYPE>(value, equal, vData, minIndex);
      break;

    case HASH:
      return new IteratorHash<TYPE>(value, equal, hData);
      break;

    default:
      assert(false);
      std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
      return 0;
    }
  }
}
//===================================================================
// this method is visible for any class
template <typename TYPE>
Iterator<unsigned int>* MutableContainer<TYPE>::findAll(const TYPE &value,
    bool equal) const {
  return findAllValues(value, equal);
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::vectset(const unsigned int i,
                                     typename StoredType<TYPE>::Value value) {
  if (minIndex == UINT_MAX) {
    minIndex = i;
    maxIndex = i;
    (*vData).push_back(value);
    ++elementInserted;
  }
  else {
    // the time performance of these two attempts of nicer coding
    // in this commented code seems worse than the loops below (about 15%)
    // if ( i > maxIndex ) {
    //-- 1st attempt --
    //   vData->resize(i+1 - minIndex, defaultValue);
    //-- 2nd attempt
    //   vData->insert(vData->end(), i - maxIndex, defaultValue);
    //   maxIndex = i;
    // } else if (i < minIndex) {
    //   vData->insert(vData->begin(), minIndex - i, defaultValue);
    //   minIndex = i;
    // }
    while ( i > maxIndex ) {
      (*vData).push_back(defaultValue);
      ++maxIndex;
    }

    while ( i < minIndex ) {
      (*vData).push_front(defaultValue);
      --minIndex;
    }

    typename StoredType<TYPE>::Value val = (*vData)[i - minIndex];
    (*vData)[i - minIndex] = value;

    if (val != defaultValue)
      StoredType<TYPE>::destroy(val);
    else
      ++elementInserted;
  }
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::set(const unsigned int i, const TYPE &value) {
  //  cerr << __PRETTY_FUNCTION__ << endl;

  //Test if after insertion we need to resize
  if (!compressing &&
      !StoredType<TYPE>::equal(defaultValue, value)) {
    compressing = true;
    compress (std::min(i,minIndex), std::max(i,maxIndex), elementInserted);
    compressing = false;
  }

  if (StoredType<TYPE>::equal(defaultValue, value)) {

    switch (state) {
    case VECT :

      if (i<=maxIndex && i>=minIndex) {
        typename StoredType<TYPE>::Value val = (*vData)[i - minIndex];

        if (val != defaultValue) {
          (*vData)[i - minIndex]= defaultValue;
          StoredType<TYPE>::destroy(val);
          --elementInserted;
        }
      }

      return;

    case HASH : {
      typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::iterator it = hData->find(i);

      if (it!=hData->end()) {
        StoredType<TYPE>::destroy((*it).second);
        hData->erase(i);
        --elementInserted;
      }

      break;
    }

    default:
      assert(false);
      std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
      break;
    }
  }
  else {
    typename StoredType<TYPE>::Value newVal =
      StoredType<TYPE>::clone(value);

    switch (state) {
    case VECT :

      vectset(i, newVal);

      return;

    case HASH : {
      typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::iterator it = hData->find(i);

      if (it!=hData->end())
        StoredType<TYPE>::destroy((*it).second);
      else
        ++elementInserted;

      (*hData)[i]= newVal;
      break;
    }

    default:
      assert(false);
      std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
      break;
    }

    maxIndex = std::max(maxIndex, i);
    minIndex = std::min(minIndex, i);
  }
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::add(const unsigned int i, TYPE val) {
  if (StoredType<TYPE>::isPointer == false) {
    if (maxIndex == UINT_MAX) {
      assert(state == VECT);
      minIndex = i;
      maxIndex = i;
      (*vData).push_back(defaultValue + val);
      ++elementInserted;
      return;
    }

    switch (state) {
    case VECT: {
      if (i > maxIndex || i < minIndex) {
        set(i, defaultValue + val);
        return;
      }

      TYPE& oldVal = (*vData)[i - minIndex];

      if (oldVal == defaultValue) {
        set(i, defaultValue + val);
        return;
      }

      oldVal += val;

      return;
    }

    case HASH: {
      typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::iterator it = hData->find(i);

      if (it!=hData->end()) {
        // check default value
        if ((it->second + val) == defaultValue) {
          StoredType<TYPE>::destroy((*it).second);
          hData->erase(i);
          --elementInserted;
        }
        else
          it->second += val;
      }
      else {
        set(i, defaultValue + val);
      }

      return;
    }

    default:
      assert(false);
      std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    }
  }

  assert(false);
  std::cerr << __PRETTY_FUNCTION__ << "not implemented" << std::endl;
}
//===================================================================
template <typename TYPE>
typename StoredType<TYPE>::ReturnedConstValue MutableContainer<TYPE>::get(const unsigned int i) const {
  //  cerr << __PRETTY_FUNCTION__ << endl;
  if (maxIndex == UINT_MAX) return StoredType<TYPE>::get(defaultValue);

  switch (state) {
  case VECT:
    if (i>maxIndex || i<minIndex)
      return StoredType<TYPE>::get(defaultValue);
    else
      return StoredType<TYPE>::get((*vData)[i - minIndex]);

  case HASH: {
    typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::iterator it = hData->find(i);

    if (it!=hData->end())
      return StoredType<TYPE>::get((*it).second);
    else
      return StoredType<TYPE>::get(defaultValue);
  }

  default:
    assert(false);
    std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    return StoredType<TYPE>::get(defaultValue);
    break;
  }
}
//===================================================================
template <typename TYPE>
bool MutableContainer<TYPE>::hasNonDefaultValue(const unsigned int i) const {
  if (maxIndex == UINT_MAX) return false;

  switch (state) {
  case VECT:
    return (i<=maxIndex && i>=minIndex &&
            (((*vData)[i - minIndex]) != defaultValue));

  case HASH:
    return ((hData->find(i))!=hData->end());

  default:
    assert(false);
    std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    return false;
  }
}
//===================================================================
template <typename TYPE>
typename StoredType<TYPE>::ReturnedValue MutableContainer<TYPE>::get(const unsigned int i, bool& notDefault) const {
  //  cerr << __PRETTY_FUNCTION__ << endl;
  if (maxIndex == UINT_MAX) {
    notDefault = false;
    return StoredType<TYPE>::get(defaultValue);
  }

  switch (state) {
  case VECT:
    if (i>maxIndex || i<minIndex) {
      notDefault = false;
      return StoredType<TYPE>::get(defaultValue);
    }
    else {
      typename StoredType<TYPE>::Value val = (*vData)[i - minIndex];
      notDefault = val != defaultValue;
      return StoredType<TYPE>::get(val);
    }

  case HASH: {
    typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::iterator it = hData->find(i);

    if (it!=hData->end()) {
      notDefault = true;
      return StoredType<TYPE>::get((*it).second);
    }
    else {
      notDefault = false;
      return StoredType<TYPE>::get(defaultValue);
    }
  }

  default:
    assert(false);
    notDefault = false;
    std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    return StoredType<TYPE>::get(defaultValue);
  }
}
//===================================================================
template <typename TYPE>
typename StoredType<TYPE>::ReturnedValue MutableContainer<TYPE>::getDefault() const {
  return StoredType<TYPE>::get(defaultValue);
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::vecttohash() {
  //  std::cerr << __FUNCTION__ << std::endl << std::flush;
  hData=new TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>(elementInserted);

  unsigned int newMaxIndex = 0;
  unsigned int newMinIndex = UINT_MAX;
  elementInserted = 0;

  for (unsigned int i=minIndex; i<=maxIndex; ++i) {
    if ((*vData)[i - minIndex] != defaultValue) {
      (*hData)[i] = (*vData)[i - minIndex];
      newMaxIndex = std::max(newMaxIndex, i);
      newMinIndex = std::min(newMinIndex, i);
      ++elementInserted;
    }
  }

  maxIndex = newMaxIndex;
  minIndex = newMinIndex;
  delete vData;
  vData = NULL;
  state = HASH;
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::hashtovect() {
  //  std::cerr << __FUNCTION__ << std::endl << std::flush;
  vData = new std::deque<typename StoredType<TYPE>::Value>();
  minIndex = UINT_MAX;
  maxIndex = UINT_MAX;
  elementInserted = 0;
  state=VECT;
  typename TLP_HASH_MAP<unsigned int, typename StoredType<TYPE>::Value>::const_iterator it;

  for (it=hData->begin(); it!=hData->end(); ++it) {
    if (it->second  != defaultValue)
      vectset(it->first, it->second);
  }

  delete hData;
  hData = NULL;
}
//===================================================================
template <typename TYPE>
void MutableContainer<TYPE>::compress(unsigned int min, unsigned int max, unsigned int nbElements) {
  //  std::cerr << __PRETTY_FUNCTION__ << std::endl;
  if (max == UINT_MAX || (max - min) < 10) return;

  double limitValue = ratio*(double(max - min + 1.0));

  switch (state) {
  case VECT:

    if ( double(nbElements) < limitValue) {
      /*
        std::cerr << "****************************************************" << std::endl;
        std::cerr << "min : " << min << " max :" << max << " lim : ";
        std::cerr  << limitValue << " el : " << elementInserted << std::endl;
        std::cerr << "minId : " << minIndex << " maxId :" << maxIndex << " lim : ";
        std::cerr  << limitValue << " el : " << elementInserted << std::endl;
      */
      vecttohash();
      /*
        std::cerr << "minId : " << minIndex << " maxId :" << maxIndex << " lim : ";
        std::cerr  << limitValue << " el : " << elementInserted << std::endl;
        std::cerr << "****************************************************" << std::endl;
        sleep(1);
      */
    }

    break;

  case HASH:

    if ( double(nbElements) > limitValue*1.5) {
      /*
        std::cerr << "****************************************************" << std::endl;
        std::cerr << "min : " << min << " max :" << max << " lim : ";
        std::cerr  << limitValue << " el : " << elementInserted << std::endl;
        std::cerr << "minId : " << minIndex << " maxId :" << maxIndex << " lim : ";
        std::cerr  << limitValue << " el : " << elementInserted << std::endl;
      */
      hashtovect();
      /*
        std::cerr << "minId : " << minIndex << " maxId :" << maxIndex << " lim : ";
        std::cerr  << limitValue << " el : " << elementInserted << std::endl;
        std::cerr << "****************************************************" << std::endl;
        sleep(1);
      */
    }

    break;

  default:
    assert(false);
    std::cerr << __PRETTY_FUNCTION__ << "unexpected state value (serious bug)" << std::endl;
    break;
  }
}
#endif // DOXYGEN_NOTFOR_DEVEL

}
#endif
