#include <iostream>
#include "car.cpp"

int main()
{

    Car_Record c1, c2, c3, c4;

    c1.setCarRecordSystem();
    c2.setCarRecordSystem();
    c3.setCarRecordSystem();
    c4.setCarRecordSystem();

    c1.getCarRecordSystem();
    c2.getCarRecordSystem();
    c3.getCarRecordSystem();
    c4.getCarRecordSystem();

    return 0;
}