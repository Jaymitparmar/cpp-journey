#include <iostream>
#include "customer.cpp"
using namespace std;

int main()
{

    int size;

    cout << "Enter Number of Customers :";
    cin >> size;

    Customar c[size];

    cout << "Customer Data Input" << endl;
    for (int i = 0; i < size; i++)
    {
        c[i].setCustomar();
    }

    for (int i = 0; i < size; i++)
    {
        c[i].getCustomar();
    }

    return 0;
}