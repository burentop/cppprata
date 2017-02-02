// Exercise 6 - Prompt user for light years; and output conversion to astronomical units

#include <iostream>
using namespace std;

double lightToAstro(double ly);

int main()
{
    cout << "Enter the number of light years: ";
    double ly;
    cin >> ly;
    double astroUnits = lightToAstro(ly);
    cout << ly << " light years = " << astroUnits << " astronomical units" << endl;
    return 0;
}

double lightToAstro(double ly)
{
    return 63240.0 * ly;
}