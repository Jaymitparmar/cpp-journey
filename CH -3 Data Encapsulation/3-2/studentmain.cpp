#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{

    int size;

    cout << "Enetr Number of Students : ";
    cin >> size;

    Student s[size];

    cout << "Student Data Input" << endl;
    for (int i = 0; i < size; i++)
    {
        s[i].setStudent();
    }

    s[0].StudentHeader();

    for (int i = 0; i < size; i++)
    {
        s[i].getStudent();
    }

    s[0].StudentFooter();

    return 0;
}