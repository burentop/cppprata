// Exercise 3 - Use two user-defined functions to print out the text described

#include <iostream>
using namespace std;

void printMice(int times);
void printRun(int times);

int main()
{
    printMice(2);
    printRun(2);
    return 0;
}

void printMice(int times)
{
    for (int i = 0; i < times; i++) {
        cout << "Three blind mice" << endl;
    }
}

void printRun(int times)
{
    for (int i = 0; i < times; i++) {
        cout << "See how they run" << endl;
    }
}