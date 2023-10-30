#include "Assign.h"

Assign::Assign()
{
    //ctor
}
void Assign::operationStaff()
{
    cout<<"Enter Name Of Your Patient :"<<endl;
    fflush(stdin);
    getline(cin,name);
    cout<<"Enter The Healthy of Patient :"<<endl;
    getline(cin,status);
    cout<<"Enter Name Of Your Assistant(Nurse):"<<endl;
    getline(cin,name);
    cout<<"Enter The Number of Ward :"<<endl;
    getline(cin,wardId);

}
void Assign::viewAssignNurse()
{
    cout<<"PatientName"<<setw(10)<<"Status"<<setw(15)<<"NurseName"<<setw(10)<<"WardID"<<endl;


}
void Assign::viewAssign()
{
    cout<<name<<setw(10)<<status<<setw(15)<<name<<setw(10)<<wardId<<endl;

}
//--------------------------------------------------

void Assign::viewAssignDoctor()
{
    cout<<"PatientName"<<setw(10)<<"Status"<<setw(15)<<"DoctorName"<<setw(10)<<"WardID"<<endl;
}



Assign::~Assign()
{
    //dtor
}
