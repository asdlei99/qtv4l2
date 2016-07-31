/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** -------------------------------------------------------------------------*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void writeDeviceName(const QString & deviceName);
    void writeCaptureSize(int width, int height);

private slots:
    void writePixmap(QPixmap * pixmap);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
