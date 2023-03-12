#include <iostream>
using namespace std;

// Write a program in C++ to convert temperature in Celsius to Fahrenheit.

int main()
{
    double cel, fah;
    cout << "Convert Celsius to Fahrenheit "
            "\n";
    cout << "Enter the value of celsius: ";
    cin >> cel;
    fah = (9 * cel + (32 * 5)) / 5;
    cout << "The temperature in Celsius is " << cel << endl;
    cout << "Celsius to Fahrenheit is : " << fah << endl;
    return 0;
}