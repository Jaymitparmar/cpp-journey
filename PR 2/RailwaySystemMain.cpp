#include <iostream>
#include "RailwaySystem.cpp"

using namespace std;

int main()
{
    RailwaySystem train[100];

    int total = 0;
    int choice;
    int searchNumber;
    int found;

    do
    {
        cout << endl;
        cout << "===== Railway Reservation System =====" << endl;

        cout << "1. Add Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train By Number" << endl;
        cout << "4. Exit" << endl;

        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            train[total].inputTrainDetails();
            total++;

            break;

        case 2:

            if (total == 0)
            {
                cout << endl;
                cout << "No Train Records Found!" << endl;
            }
            else
            {
                for (int i = 0; i < total; i++)
                {
                    cout << endl;
                    cout << "----- Train " << i + 1 << " -----" << endl;

                    train[i].displayTrainDetails();
                }
            }

            break;

        case 3:

            cout << endl;
            cout << "Enter Train Number To Search : ";
            cin >> searchNumber;

            found = 0;

            for (int i = 0; i < total; i++)
            {
                if (train[i].getTrainNumber() == searchNumber)
                {
                    cout << endl;
                    cout << "Train Found!" << endl;

                    train[i].displayTrainDetails();

                    found = 1;

                    break;
                }
            }

            if (found == 0)
            {
                cout << endl;
                cout << "Train Not Found!" << endl;
            }

            break;

        case 4:

            cout << endl;
            cout << "Exiting the system. Goodbye!" << endl;

            break;

        default:

            cout << endl;
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}