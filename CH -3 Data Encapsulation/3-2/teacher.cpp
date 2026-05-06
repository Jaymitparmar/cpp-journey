#include <iostream>
using namespace std;

class Teachers
{
private:
    int t_no;
    string name;
    string subject;
    string salary;
    string time;

public:
    void setTeacherData()
    {
        cout << endl;

        cout << "Enter Teacher Number :";
        cin >> this->t_no;

        cout << "Enter Teacher Name :";
        cin >> this->name;

        cout << "Enter Teacher Subject :";
        cin >> this->subject;

        cout << "Enter Teacher Salary :";
        cin >> this->salary;

        cout << "Enter Teacher Lecture Time :";
        cin >> this->time;
    }

    void TeacherHeader()
    {
        cout << "|--\t----\t-------\t------\t----\t|" << endl;
        cout << "|NO\tNAME\tSUBJECT\tSALARY\tTIME\t|" << endl;
        cout << "|--\t----\t-------\t------\t----\t|" << endl << endl;
    }

    void getTeacherData()
    {
        cout << "|" << this->t_no << "\t" << this->name << "\t" << this->subject << "\t" << this->salary << "\t" << this->time << "\t" << "|" << endl;
    }

    void TeacherFooter()
    {
        cout << "|--\t----\t-------\t------\t----\t|" << endl;
    }
};