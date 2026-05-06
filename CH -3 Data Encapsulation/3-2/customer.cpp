#include <iostream>
using namespace std;

class Customar
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_mobile_number;
    double cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setCustomar()
    {
        cout << endl;

        cout << "Enter Your Id :";
        cin >> this->cust_id;

        cout << "Enter Your Name :";
        cin >> this->cust_name;

        cout << "Enter Your Age :";
        cin >> this->cust_age;

        cout << "Enter Your City :";
        cin >> this->cust_city;

        cout << "Enter Your Mobile Number :";
        cin >> this->cust_mobile_number;

        cout << "Enter Your Simcard Validity :";
        cin >> this->cust_simcard_validity;

        cout << "Enter Your Telecom Brand Name :";
        cin >> this->cust_telecom_brand_name;
    }

    void getCustomar()
    {
        cout << endl
             << endl;

        cout << "Customer Id\t\t\t:" << this->cust_id << endl;
        cout << "Customer Name\t\t\t:" << this->cust_name << endl;
        cout << "Customer Age\t\t\t:" << this->cust_age << endl;
        cout << "Customer City\t\t\t:" << this->cust_city << endl;
        cout << "Customer Mobile Number\t\t:" << this->cust_mobile_number << endl;
        cout << "Customer Simcard Validity\t:" << this->cust_simcard_validity << endl;
        cout << "Customer Telecom Brand Name\t:" << this->cust_telecom_brand_name << endl;
    }
};