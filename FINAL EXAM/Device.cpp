#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
    void setBrand(string branch)
    {
        brand = branch;
    }

    void setPowerConsumption(int setPowerConsumption)
    {
        powerConsumption = setPowerConsumption;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
private:
    int ram;

public:
    void setRAM(int ram)
    {
        ram = ram;
    }

    void displayLaptop()
    {
        cout << "Laptop Details:" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "RAM: " << ram << "GB" << endl;
    }
};

class Smartphone : public Device
{
private:
    int cameraMP;

public:
    void setCamera(int c)
    {
        cameraMP = c;
    }

    void displaySmartphone()
    {
        cout << "\nSmartphone Details:" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "Camera: " << cameraMP << "MP" << endl;
    }
};

int main()
{
    Laptop l1;
    l1.setBrand("Dell");
    l1.setPowerConsumption(65);
    l1.setRAM(16);

    Smartphone s1;
    s1.setBrand("Samsung");
    s1.setPowerConsumption(15);
    s1.setCamera(64);

    l1.displayLaptop();
    s1.displaySmartphone();

    
}