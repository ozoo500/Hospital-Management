#ifndef ASSIGN_H
#define ASSIGN_H
#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

class Assign
{
public:
    string name;
    string wardId;
    string status;

public:
    Assign();
    void viewAssign();
    void viewAssignDoctor();
    void viewAssignNurse();
    void operationStaff();
    ~Assign();

protected:


};

#endif // ASSIGN_H
