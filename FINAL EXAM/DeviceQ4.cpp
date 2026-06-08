#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }

    virtual double calculateDiscount()
    {
        return 0;
    }

    virtual ~Device() {}
};

class Laptop : public Device
{
private:
    int ram;

public:
    void setRAM(int r)
    {
        ram = r;
    }

    double calculateDiscount() override
    {
      
        if (ram >= 16)
            return 15.0;
        else
            return 10.0;
    }

    void displayLaptop()
    {
        cout << "Laptop Details:" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: "
             << getPowerConsumption() << "W" << endl;
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

    double calculateDiscount() override
    {
       
        if (cameraMP >= 50)
            return 12.0;
        else
            return 8.0;
    }

    void displaySmartphone()
    {
        cout <<endl<< "Smartphone Details:" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: "
             << getPowerConsumption() << "W" << endl;
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

    
    Device *devices[2];

    devices[0] = &l1;
    devices[1] = &s1;

    cout << "Discount Details:\n";

    for (int i = 0; i < 2; i++)
    {
        cout << devices[i]->getBrand()
             << " Discount = "
             << devices[i]->calculateDiscount()
             << "%" << endl;
    }

   
}