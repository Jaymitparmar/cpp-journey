#include <iostream>
#include "Hotel.cpp"

int main()
{
    int size;

    cout << "Enter number of Hotels : ";
    cin >> size;

    HotelInfo hotel[size];

    cout << "\nHotel Data Input\n";

    for (int i = 0; i < size; i++)
    {
        hotel[i].HotelData();
    }

    for (int i = 0; i < size; i++)
    {
        hotel[i].getHotelData();
    }

    return 0;
}