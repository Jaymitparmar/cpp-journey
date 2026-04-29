#include <iostream>
using namespace std;

class Employee_Record
{
private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    double emp_experience;
    string emp_company_name;

public:
    void setEmployeeRecord()
    {
        cout << endl
             << endl;

        cout << "Enter Your Id : ";
        cin >> emp_id;

        cout << "Enter Your Name : ";
        cin >> emp_name;

        cout << "Enter Your Age : ";
        cin >> emp_age;

        cout << "Enter Your Role : ";
        cin >> emp_role;

        cout << "Enter Your Salary : ";
        cin >> emp_salary;

        cout << "Enter Your City : ";
        cin >> emp_city;

        cout << "Enter Your Experience : ";
        cin >> emp_experience;

        cout << "Enter Your Company Name : ";
        cin >> emp_company_name;
    }

    void getEmployeeRecord()
    {
        cout << endl
             << endl;

        cout << "Employee Id :" << emp_id << endl;
        cout << "Employee Name :" << emp_name << endl;
        cout << "Employee Age :" << emp_age << endl;
        cout << "Employee Role :" << emp_role << endl;
        cout << "Employee Salary :" << emp_salary << endl;
        cout << "Employee City :" << emp_city << endl;
        cout << "Employee Experience :" << emp_experience << endl;
        cout << "Employee Company Name :" << emp_company_name << endl;

        cout << endl;
    }
};