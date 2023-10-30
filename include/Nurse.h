#ifndef NURSE_H
#define NURSE_H
#include <iostream>
using namespace std;
#include<cstdio>
#include"OperationStaff.h"

class Nurse : public OperationStaff
{
public:
    string speciality;
    string wardId;
    string status;
public:
    Nurse();
    Nurse(string speciality,string wardId);
    void setWardId(string wardId);
    string getWardId();
    void setSpeciality(string speciality);
    string getSpeciality();
    void print();
    void setInfo();
    void firstLine();
    ~Nurse();


};

#endif // NURSE_H
