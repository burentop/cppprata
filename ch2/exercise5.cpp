// Exercise 5 - Prompt user for a Celsius temp; output the Fahrenheit conversion
// Use a function for the conversion

#include <iostream>
using namespace std;

int celsToFahren(int cels);

int main()
{
    cout << "Please enter a Celsius value: ";
    int celsius;
    cin >> celsius;
    int fahrenheit = celsToFahren(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}

int celsToFahren(int celsius)
{
    return 1.8 * celsius + 32;
}