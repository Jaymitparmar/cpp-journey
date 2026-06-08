#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
   
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
        cout << "Name: " << name
             << ", Roll Number: " << rollNumber << endl;
    }
};

int main()
{
     Student students[3] = {
        Student("Jay", 101),
        Student("Rahul", 102),
        Student("Priya", 103)
    };

    cout << "Student Details:\n";

    for (int i = 0; i < 3; i++)
    {
        students[i].display();
    }

}