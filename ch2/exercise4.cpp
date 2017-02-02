// Exercise 4 - Prompt for user's age, then print it in months

#include <iostream>
using namespace std;

int printMonths(int years);

int main()
{
    cout << "Please enter your age in years: ";
    int years;
    cin >> years;
    int months = printMonths(years);
    cout << "Your age in months is " << months << endl;
    return 0;
}

int printMonths(int years)
{
    return years * 12;
}