#include <iostream>
#include "teacher.cpp"
using namespace std;

int main()
{

    int size;

    cout << "Enter Number of teachers :";
    cin >> size;

    Teachers t[size];

    cout << "Teacher Data Input" << endl;
    for (int i = 0; i < size; i++)
    {
        t[i].setTeacherData();
    }

    t[0].TeacherHeader();

    for (int i = 0; i < size; i++)
    {
        t[i].getTeacherData();
    }

    t[0].TeacherFooter();

    return 0;
}