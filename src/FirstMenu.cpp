#include "FirstMenu.h"
#include"Doctor.h"
#include"Nurse.h"
#include"OperationStaff.h"
#include"Patient.h"
#include"Assign.h"
#include"Staff.h"
#include"User.h"

FirstMenu::FirstMenu()
{
    //ctor
}
void FirstMenu::firstMenu()
{
    int choice;
    int counter=0;
    int counter1=0;
    int counter2=0;
    int counter3=0;
    Doctor Doc[100];
    Nurse Nur[100];
    Patient pat[100];
    Assign ass[100];

    do
    {
        cout<<"Welcome To Our Hospital Management System"<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"1-Register TO Our System"<<endl;
        cout<<"2-Display Info About Actor of System"<<endl;
        cout<<"3-View Assign(Doctor-Nurse)"<<endl;
        cout<<"4-Exit"<<endl;
        cout<<"----------------------------------------"<<endl;
        cin>>choice;
        if(choice==1)
        {
            int input;
            do
            {
                cout<<"As...."<<endl;
                cout<<"1-Doctor"<<endl;
                cout<<"2-Nurse"<<endl;
                cout<<"3-Patient"<<endl;
                cout<<"4-Back"<<endl;
                cout<<"-------------------"<<endl;
                cin>>input;
                if(input==1)
                {

                    Doc[counter1++].setInfo();
                }
                else if(input==2)
                {
                    Nur[counter2++].setInfo();
                }
                else if(input==3)
                {

                    pat[counter3++].setInfo();
                }


            }
            while(input!=4);
        }
        else if(choice==2)
        {
            int choose;
            do
            {
                cout<<"1-Display Info Of Doctor"<<endl;
                cout<<"2-Display Info Nurse"<<endl;
                cout<<"3-Display Info Patient"<<endl;
                cout<<"4-Back"<<endl;
                cout<<"-----------------------"<<endl;
                cin>>choose;
                if(choose==1)
                {
                    Doc[0].firstLine();
                    for(int i=0; i<counter1; i++)
                    {
                        Doc[i].print();
                    }

                }
                else if(choose==2)
                {
                    Nur[0].firstLine();
                    for(int i=0; i<counter2; i++)
                    {
                        Nur[i].print();
                    }

                }
                else if(choose==3)
                {
                    pat[0].firstLine();
                    for(int i=0; i<counter3; i++)
                    {
                        pat[i].print();
                    }
                }


            }
            while(choose!=4);

        }
        else if(choice==3)
        {
            int answer;

            do
            {
                cout<<"1-View Assign Nurse"<<endl;
                cout<<"2-view Assign Doctor"<<endl;
                cout<<"3-Back"<<endl;
                cout<<"------------------------"<<endl;
                cin>>answer;
                if(answer==1)
                { int input2;
                  do{
                    cout<<"1-Set Info Of Nurse"<<endl;
                    cout<<"2-Display"<<endl;
                    cout<<"3-Back"<<endl;
                    cout<<"-------------------------"<<endl;
                    cin>>input2;
                    if(input2==1)
                    {
                        ass[counter++].operationStaff();
                    }
                    else if(input2==2)
                    {
                        ass[0].viewAssignNurse();
                        for(int i=0;i<counter;i++)
                        {
                            ass[i].viewAssign();
                        }

                    }

                  }while(input2!=3);


                }
                else if(answer==2)
                {
                    int input3;
                  do{
                    cout<<"1-Set Info Of Doctor"<<endl;
                    cout<<"2-Display"<<endl;
                    cout<<"3-Back"<<endl;
                    cout<<"-------------------"<<endl;
                    cin>>input3;
                    if(input3==1)
                    {
                        ass[counter++].operationStaff();
                    }
                    else if(input3==2)
                    {
                        ass[0].viewAssignNurse();
                        for(int i=0;i<counter;i++)
                        {
                            ass[i].viewAssign();
                        }

                    }

                  }while(input3!=3);


                }

            }
            while(answer!=3);

        }

    }
    while(choice!=4);

}

FirstMenu::~FirstMenu()
{
    //dtor
}
