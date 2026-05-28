#include <iostream>
using namespace std;

class Math
{
public:
    void sum(int n)
    {
        ++n;
        cout << "Sum : " << n << endl;
    }

    void sum(int a, int b)
    {
        cout << "Sum : " << a + b << endl;
    }

    void sum(int x, int y, int z)
    {
        cout << "Sum : " << x + y + z << endl;
    }
};