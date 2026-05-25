#include <iostream>
using namespace std;

class P
{
protected:
    float celsius;

public:
    void getCelsius()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
};


class Q : public P
{
protected:
    float fahrenheit;

public:
    void toFahrenheit()
    {
        fahrenheit = (celsius * 9 / 5) + 32;

        cout << "Temperature in Fahrenheit = "
             << fahrenheit << endl;
    }
};


class R : public Q
{
private:
    float kelvin;

public:
    void toKelvin()
    {
        kelvin = ((fahrenheit - 32) * 5 / 9) + 273.15;

        cout << "Temperature in Kelvin = "
             << kelvin << endl;
    }
};