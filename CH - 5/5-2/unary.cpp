#include <iostream>
using namespace std;

class Unary
{
private:
    int a;

public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getData()
    {
        cout << "A\t: " << this->a << endl;
    }

    Unary operator++(int n)
    {
        Unary obj;

        obj.a = this->a + 1;

        return obj;
    }

    Unary operator--(int n)
    {
        Unary obj;

        obj.a = this->a - 1;

        return obj;
    }
};

int main()
{
    Unary u1, u2;

    u1.setData(); // u1 => a [22]

    // a = 10
    // a++ // a = a  + 1
    u2 = u1--; // u1.operator--(1)

    cout << endl;

    u1.getData(); // 22
    u2.getData(); // 21
}