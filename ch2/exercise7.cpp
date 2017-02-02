// Exercise 7 - Prompt user for hours, and then minutes; then output the x:xx format

#include <iostream>
using namespace std;

void printTimeFormat(int hour, int minute);

int main()
{
    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    printTimeFormat(hours, minutes);
    return 0;
}

void printTimeFormat(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}