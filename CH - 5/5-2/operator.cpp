#include <iostream>
using namespace std;

class Operator
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

    Operator operator+(Operator obj)
    {
        Operator demo; // demo => a [50]

        demo.a = this->a + obj.a;

        return demo;
    }

    Operator operator-(Operator obj)
    {
        Operator demo; // demo => a [50]

        demo.a = this->a - obj.a;

        return demo;
    }
};

int main()
{
    Operator o1, o2, o3;

    o1.setData(); 
    o2.setData(); 

    o3 = o1 - o2; 

    cout << endl;
    o1.getData(); 
    o2.getData(); 
    o3.getData(); 
}