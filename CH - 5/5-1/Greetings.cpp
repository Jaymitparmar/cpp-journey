#include <iostream>
using namespace std;

class Greetings
{
public:
    void myGreeting()
    {
        cout << endl
             << "Welcome to my City" << endl;
    }
};

class WelComeGreetings : public Greetings
{
public:
    // myGreeting()
    void myGreeting()
    {
        cout << endl
             << "Welcome to Surat Green and Clean City" << endl;
        Greetings::myGreeting();
    }
};

int main()
{
    WelComeGreetings w1;

    w1.myGreeting();
}