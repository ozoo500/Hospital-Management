#ifndef USER_H
#define USER_H
#include<iostream>
#include<iomanip>
using namespace std;

class User
{
public:
    string email;
    string password;
    string name;
    string phone;
    string address;
public:
    User();
    void setInfo();
    void setAddress(string address);
    void printDetails();
    ~User();

};

#endif // USER_H


