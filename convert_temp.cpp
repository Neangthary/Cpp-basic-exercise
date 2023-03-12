#include <iostream>
using namespace std;

// Write a program in C++ to convert temperature in Celsius to Fahrenheit.

int main()
{
    double cel, fah;
    cout << "\n\n Convert temperature in Fahrenheit to Celsius :\n";
    cout << "---------------------------------------------------\n";
    cout << " Input the temperature in Fahrenheit : ";
    cin >> fah;
    cel = ((fah * 5.0) - (5.0 * 32)) / 9;
    cout << " The temperature in Fahrenheit : " << fah << endl;
    cout << " The temperature in Celsius : " << cel << endl;
    cout << endl;
    return 0;
}