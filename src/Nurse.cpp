#include "Nurse.h"
Nurse::Nurse()
{
    speciality=" ";
    wardId=" ";

}
Nurse::Nurse(string speciality,string  wardId)
{
    this->speciality=speciality;
    this->wardId=wardId;
}
void Nurse::setWardId(string wardId)
{
    this->wardId=wardId;
}
string Nurse::getWardId()
{
    return wardId;
}
void Nurse::setSpeciality(string speciality)
{
    this->speciality=speciality;
}
string Nurse::getSpeciality()
{
    return speciality;
}



void Nurse::setInfo()
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
    cout<<"Enter your WardID :"<<endl;
    getline(cin,wardId);

}
void Nurse::print()
{
    cout<<setw(10)<<email<<setw(15)<<password<<setw(10)<<name<<setw(10)<<phone<<setw(10)<<address<<setw(20)<<speciality<<setw(10)<<wardId<<endl;

}
void Nurse::firstLine()
{
    cout<<setw(10)<<"Email"<<setw(15)<<"Password"<<setw(10)<<"Name"<<setw(10)<<"Phone"<<setw(10)<<"Address"<<setw(20)<<"Speciality"<<setw(10)<<"WardID"<<endl;


}

Nurse::~Nurse()
{
    //dtor
}
