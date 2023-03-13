#include <iostream>
using namespace std;

// Write a program in C++ that converts kilometers per hour to miles per hour.

int main()
{
    double kmph, mph;
    cout << "\n\n Converts kilometers per hour to miles per hour \n";
    cout << "___________________________ \n";
    cout << "The distance in kilomerter per hour is : ";
    cin >> kmph;
    mph = (kmph * 0.6213712);
    cout << "The distance in miles per hour is : " << mph << " "
         << "miles/h" << endl;
    cout << endl;
    return 0;
}