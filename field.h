#include <vector>
#include <QtWidgets>

struct Cell
{
public:
    Cell(int);

    bool isEmpty();
    int getNumber();

private:
    int number;
};

struct Field : QWidget
{
    std::vector<std::vector<Cell>> field;
};