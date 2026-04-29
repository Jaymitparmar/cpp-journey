#include <iostream>
using namespace std;

class Car_Record
{
private:
    int car_id;
    string car_company_name;
    string car_color;
    int car_model;
    int car_release_year;

public:
    void setCarRecordSystem()
    {
        cout << endl
             << endl;

        cout << "Enter Car ID :";
        cin >> car_id;

        cout << "Enter Car Company Name :";
        cin >> car_company_name;

        cout << "Enter Car Color :";
        cin >> car_color;

        cout << "Enter Car Model :";
        cin >> car_model;

        cout << "Enter Car Release Year :";
        cin >> car_release_year;
    }

    void getCarRecordSystem()
    {
        cout << endl
             << endl;

        cout << "Car ID :" << car_id << endl;
        cout << "Car Company Name :" << car_company_name << endl;
        cout << "Car Color :" << car_color << endl;
        cout << "Car Model :" << car_model << endl;
        cout << "Car Release Year :" << car_release_year << endl;

        cout << endl;
    }
};