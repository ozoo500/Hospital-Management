#ifndef OPERATIONSTAFF_H
#define OPERATIONSTAFF_H
#include"Staff.h"

class OperationStaff :public Staff
{


public:
    OperationStaff();
    virtual void print()=0;
    ~OperationStaff();


};

#endif // OPERATIONSTAFF_H
