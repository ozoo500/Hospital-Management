#include "User.h"


User::User()
{
    email = " ";
    password = " ";
    name = " ";
    phone = " ";
    address = " ";


}

void User::setInfo()
{

    cout<<"Enter your Email :"<<endl;
    getline(cin,email);
    cout<<"Enter your Password :"<<endl;
    getline(cin,password);
    cout<<"Enter your Name :"<<endl;
    getline(cin,name);
    cout<<"Enter your Phone :"<<endl;
    getline(cin,phone);
    cout<<"Enter your Address :"<<endl;
    getline(cin,address);

}

void User::printDetails()
{

    cout<<setw(10)<<email<<setw(12)<<password<<setw(10)<<name<<setw(10)<<phone<<setw(10)<<address;
}

User::~User()
{

}
