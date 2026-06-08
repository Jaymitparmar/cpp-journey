#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double speed;

public:
    // Constructor use karu che 
    Car(string m, int y, double s) {
        model = m;
        year = y;
        speed = s;
    }

   
    void display() {
        cout << "Car Model: " << model << endl;
        cout << "Manufacturing Year: " << year << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car1("Skoda supurb", 2018, 180.5);
    car1.display();
    
}