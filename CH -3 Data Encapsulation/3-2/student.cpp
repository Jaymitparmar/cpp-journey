#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_college;

public:
    void setStudent()
    {
        cout << endl;

        cout << "Enter Your Id :";
        cin >> this->stu_id;

        cout << "Enter Your Name :";
        cin >> this->stu_name;

        cout << "Enter Your Age :";
        cin >> this->stu_age;

        cout << "Enter Your Course :";
        cin >> this->stu_course;

        cout << "Enter Your City :";
        cin >> this->stu_city;

        cout << "Enter Your College :";
        cin >> this->stu_college;
    }

    void StudentHeader()
    {
        cout << "|--\t----\t---\t------\t----\t-------\t|" << endl;
        cout << "|ID\tNAME\tAGE\tCOURSE\tCITY\tCOLLAGE\t|" << endl;
        cout << "|--\t----\t---\t------\t----\t-------\t|" << endl
             << endl;
    }

    void getStudent()
    {
        cout << "|" << this->stu_id << "\t" << this->stu_name << "\t" << this->stu_age << "\t" << this->stu_course << "\t" << this->stu_city << "\t" << this->stu_college << "\t" << "|" << endl;
    }

    void StudentFooter()
    {
        cout << endl;
        cout << "|--\t----\t---\t------\t----\t-------\t|" << endl;
    }
};