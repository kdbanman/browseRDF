#ifndef TULIP_RELEASE
#define TULIP_RELEASE "3.8.0"
#define TULIP_MM_RELEASE "3.8"
#define TULIP_INT_RELEASE 380
#endif

//The release and debug mode are not choosen during the CMake configuration process for Visual Studio.
//So we cannot guess the mode choosen by user.
#if !defined(_MSC_VER)
// The debug and release modes are not binary compatible, so we cause an error
// when compiling in debug mode while Tulip has been built in release mode and vice-versa.
#   if 0
#       define TULIP_BUILD_RELEASE
#   else
#       define TULIP_BUILD_DEBUG
#   endif

#   if defined(TULIP_BUILD_RELEASE) and !defined(NDEBUG)
#       error "You are trying to compile in DEBUG mode (no -DNDEBUG in CXXFLAGS) while Tulip has been built in RELEASE mode (-DNDEBUG in CXXFLAGS). This will cause crash."
#   elif defined(TULIP_BUILD_DEBUG) and defined(NDEBUG)
#       error "You are trying to compile in RELEASE mode (-DNDEBUG in CXXFLAGS) while Tulip has been built in DEBUG mode (no -DNDEBUG in CXXFLAGS). This will cause crash."
#   endif
#   endif //!defined(_MSC_VER)
