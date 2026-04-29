#include <iostream>
#include "Employee.cpp"

int main ()
{

    Employee_Record E1, E2, E3, E4, E5;
    
    E1.setEmployeeRecord();
    E2.setEmployeeRecord();
    E3.setEmployeeRecord();
    E4.setEmployeeRecord();
    E5.setEmployeeRecord();

    E1.getEmployeeRecord();
    E2.getEmployeeRecord();
    E3.getEmployeeRecord();
    E4.getEmployeeRecord();
    E5.getEmployeeRecord();

    return 0;
}