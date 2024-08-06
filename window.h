#include "field.h"
#include <QtWidgets>

class QPushButton;

class GameWindow : QWidget
{
private:
    Field field;
    QPushButton *undo;
};

class MainWindow : public QWidget
{
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    int win_width;
    int win_height;

    unsigned int but_width;
    unsigned int but_height;

    QPushButton *start_button;
    QPushButton *exit_button;
};