#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;
#include"User.h"


class Staff: public User
{
public:
    string position;
public:
    Staff();
    Staff(string position);
    void setPosition(string position);
    string getPosition();

    ~Staff();



};

#endif // STAFF_H
