#include "field.h"

Cell::Cell(int number)
    : number{number} {};

bool Cell::isEmpty()
{
    return this->getNumber() == 0 ? 1 : 0;
}

int Cell::getNumber()
{
    return this->number;
}
