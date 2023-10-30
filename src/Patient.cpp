#include "Patient.h"
Patient::Patient()
{
    age=id=" ";
}
Patient::Patient(string age,string id)
{
    this->age=age;
    this->id=id;

}
void Patient::setId(string id)
{
    this->id=id;
}
void Patient::setAge(string age)
{
    this->age=age;
}
string Patient::getId()
{
    return id;
}
string Patient::getAge()
{
    return age;
}
void Patient::setInfo()
{
   cout<<"Enter your Email :"<<endl;
    fflush(stdin);
    getline(cin,email);
    cout<<"Enter your Password :"<<endl;
    getline(cin,password);
    cout<<"Enter your Name :"<<endl;
    getline(cin,name);
    cout<<"Enter your Phone :"<<endl;
    getline(cin,phone);
    cout<<"Enter your Address :"<<endl;
    getline(cin,address);
    cout<<"Enter your Age :"<<endl;
    getline(cin,age);
    cout<<"Enter your ID :"<<endl;
    getline(cin,id);



}


void Patient::print()
{
    cout<<setw(10)<<email<<setw(15)<<password<<setw(10)<<name<<setw(10)<<phone<<setw(10)<<address<<setw(10)<<age<<setw(10)<<id<<endl;

}
void Patient::firstLine()
{
    cout<<setw(10)<<"Email"<<setw(15)<<"Password"<<setw(10)<<"Name"<<setw(10)<<"Phone"<<setw(10)<<"Address"<<setw(10)<<"Age"<<setw(10)<<"ID"<<endl;



}

Patient::~Patient()
{
    //dtor
}
