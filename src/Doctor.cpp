#include "Doctor.h"

Doctor::Doctor()
{
    speciality=" ";

}
Doctor::Doctor(string speciality)
{
    this->speciality=speciality;
}
void Doctor::setSpeciality(string speciality)
{
    this->speciality=speciality;

}
string Doctor::getSpeciality()
{
    return speciality;
}

void Doctor::setInfo()
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
    cout<<"Enter your Speciality :"<<endl;
    getline(cin,speciality);


}

void  Doctor::print()
{

    cout<<setw(10)<<email<<setw(15)<<password<<setw(10)<<name<<setw(10)<<phone<<setw(10)<<address<<setw(15)<<speciality<<endl;


}
void Doctor::firstLine()
{
    cout<<setw(10)
        <<"Email"<<setw(15)<<"Password"<<setw(10)<<"Name"<<setw(10)<<"Phone"<<setw(10)<<"Address"<<setw(15)<<"Speciality"<<endl;

}

Doctor::~Doctor()
{
    //dtor
}
