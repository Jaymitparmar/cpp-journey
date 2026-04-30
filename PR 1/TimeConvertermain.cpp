#include <iostream>
#include "TimeConverter.cpp"

int main()
{
    TimeConverter obj;

    obj.convertSecToTime();
    obj.showTime();

    obj.convertTimeToSec();
    obj.showSeconds();

    return 0;
}