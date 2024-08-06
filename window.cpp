#include "window.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    win_width = 1280;
    win_height = 720;
    setFixedSize(win_width, win_height);
    setWindowTitle(
        QApplication::translate("toplevel", "Main Window"));

    but_width = win_width * 0.25;
    but_height = win_height * 0.1;

    start_button = new QPushButton("Start", this);
    start_button->setGeometry((win_width - but_width) / 2, win_height / 2 - 50, but_width, but_height);
    start_button->show();
    // QObject::connect(start_button, SIGNAL(clicked()), QApplication::instance(), SLOT(start_button_clicked()));

    exit_button = new QPushButton("Exit", this);
    exit_button->setGeometry((win_width - but_width) / 2, win_height / 2 + 50, but_width, but_height);
    exit_button->show();
    QObject::connect(exit_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
}