#include <iostream>
using namespace std;

class RailwaySystem
{
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[20];

    static int trainCount;

public:
    RailwaySystem()
    {
        trainCount++;
    }

    ~RailwaySystem()
    {
        trainCount--;
    }

    void inputTrainDetails()
    {
        cout << "Enter Train Number : ";
        cin >> trainNumber;

        cout << "Enter Train Name : ";
        cin >> trainName;

        cout << "Enter Source : ";
        cin >> source;

        cout << "Enter Destination : ";
        cin >> destination;

        cout << "Enter Train Time : ";
        cin >> trainTime;
    }

    void displayTrainDetails()
    {
        cout << endl;

        cout << "Train Number : " << this -> trainNumber << endl;
        cout << "Train Name   : " << this ->trainName << endl;
        cout << "Source       : " << this ->source << endl;
        cout << "Destination  : " << this ->destination << endl;
        cout << "Train Time   : " << this ->trainTime << endl;
    }

    int getTrainNumber()
    {
        return trainNumber;
    }
};

int RailwaySystem::trainCount = 0;