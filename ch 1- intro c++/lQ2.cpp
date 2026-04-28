#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter  first number : ";
    cin >> a;

    cout << "Enter  second number : ";
    cin >> a;

    cout << "The Leap Years are :" << endl;
    for (int i = a; i <= b; i++)
    {
        if (i % 4 == 0 && i % 100 != 0)
        {
            cout << i << "\t";
        }
    }
    return 0;
}