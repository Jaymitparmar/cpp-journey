#include <iostream>
using namespace std;

class student
{
    private:
        int stu_id;
        string stu_name;
        int stu_age;
        string stu_course;
        string stu_city;
        string stu_email;
        string stu_college;
    public:
        void setStudent()
        {
            cout<< "Enter Student id:";
            cin>> this->stu_id;

            cout<< "Enter Student name:";
            cin>> this->stu_name;

            cout<< "Enter Student age:";
            cin>> this->stu_age;

            cout<<" Enter Student course:";
            cin>> this->stu_course;

            cout<<" Enter Student city:";
            cin>> this->stu_city;

            cout<< "Enter Student email:";
            cin>> this->stu_email;

            cout<< "Enter Student collage:";
            cin>> this->stu_college;

        }

        void getstudent()
        {
            cout<<endl<<endl<<endl;
             cout << "Student Id\t: " << this->stu_id << endl;
             cout << "Student Name\t" << this ->stu_name<<endl;
             cout << "Student Age\t" << this ->stu_age <<endl;
             cout << "Student Course\t: " << this->stu_course << endl;
             cout << "Student City\t" << this ->stu_city<<endl;
             cout << "Student Email\t" << this ->stu_email <<endl;
             cout << "Student Collage\t"<< this ->stu_college<<endl;


        }
};

