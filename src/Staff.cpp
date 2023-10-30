#include "Staff.h"

Staff::Staff()
{

}
Staff::Staff(string position)
{
    position=" ";
}
void Staff::setPosition(string position)
{
    this->position=position;
}
string Staff::getPosition()
{
    return position;
}


Staff::~Staff()
{
    //dtor
}
