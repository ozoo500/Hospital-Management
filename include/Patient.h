#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
using namespace std;
#include"User.h"
#include<cstdio>


class Patient:public User
{
private:

    string age;
    string  id;

public:
    Patient();
    Patient(string age,string id);
    void setId(string id);
    void setAge(string age);
    string getAge() ;
    string getId();
    void print();
    void setInfo();
    void firstLine();
    ~Patient();

};

#endif // PATIENT_H
