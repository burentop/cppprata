// Exercise 2 - ask user to enter number of furlongs; output converted to yards
// 1 furlong is 220 yards

#include <iostream>
using namespace std;

int main()
{
    const int YARDS_IN_FURLONG = 220;

    cout << "Please enter the number of furlongs you want converted: ";
    int furlong;
    cin >> furlong;
    int yards = furlong * YARDS_IN_FURLONG;
    cout << "There are " << yards << " yards in " << furlong << " furlongs." << endl;
    return 0;
}