#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
using namespace std;
#include<cstdio>
#include"OperationStaff.h"

class Doctor : public OperationStaff
{
public:

    string speciality;

public:
    Doctor();
    Doctor(string speciality);
    void setSpeciality(string speciality);
    string getSpeciality();
    void print();
    void setInfo();
    void firstLine();
    ~Doctor();


};

#endif // DOCTOR_H
