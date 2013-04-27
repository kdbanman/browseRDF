#ifndef SIZEWIDGET_H
#define SIZEWIDGET_H

#include <QtGui/QWidget>
#include <tulip/Size.h>
#include <tulip/tulipconf.h>

namespace Ui {
class SizeWidget;
}
namespace tlp {
/**
  * @brief Simple Size edition widget. Allow the user to input negative sizes.
  **/
class TLP_QT_SCOPE SizeWidget : public QWidget {
  Q_OBJECT
public:
  explicit SizeWidget(QWidget *parent = NULL);
  ~SizeWidget();
  tlp::Size size()const;
public slots:
  /**
    * @brief Set the size displayed by this widget. Emit the sizeChanged signals.
    **/
  void setSize(const tlp::Size& size);
signals:
  void sizeChanged(tlp::Size size);

private slots:
  void sizeUpdated();

private:
  Ui::SizeWidget *ui;
};
}

#endif // SIZEWIDGET_H
