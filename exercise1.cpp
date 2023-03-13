#include <iostream>
using namespace std;

// Write a program in C++ to compute quotient and remainder.

int main()
{
    int dividend, divisor, quotient, remainder;

    cout << "Inter the dividend: ";
    cin >> dividend;
    cout << "Inter the divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor; // % modulus: return the division remainder
    cout << "The result of quotient is: " << quotient << endl;
    cout << "The result of remainder is: " << remainder << endl;
    return 0;
}