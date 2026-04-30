#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int total;
    int hr, min, sec;

public:
    
    void convertSecToTime()
    {
        cout << "\n\nEnter total seconds: ";
        cin >> total;

        hr = total / 3600;
        min = (total % 3600) / 60;
        sec = total % 60;
    }

    void showTime()
    {
        cout << "\n\nTime (HH:MM:SS) = "
             << hr << ":" << min << ":" << sec << "\n\n";
    }


    void convertTimeToSec()
    {
        cout << "\n\nEnter Hours: ";
        cin >> hr;

        cout << "Enter Minutes: ";
        cin >> min;

        cout << "Enter Seconds: ";
        cin >> sec;
    }

    void showSeconds()
    {
        int result = (hr * 3600) + (min * 60) + sec;

        cout << "\n\nTotal Seconds = " << result << "\n\n";
    }
};