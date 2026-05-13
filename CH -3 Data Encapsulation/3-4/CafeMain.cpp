#include <iostream>
#include "Cafe.cpp"
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Cafes : ";
    cin >> n;

    FastFoodCafe cafe[n];

    cout << "\n===== Cafe Details =====" << endl;

    for (int i = 0; i < 2; i++)
    {
        cafe[i].display();
    }

    return 0;
}