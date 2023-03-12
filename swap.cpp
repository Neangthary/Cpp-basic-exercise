#include <iostream>
using namespace std;
// Write a program in C++ to swap two numbers.

int main()
{
    int a, b, temp;
    cout << "Enter number before swap: " << endl;
    cin >> a;
    cout << "Enter number before swap: " << endl;
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << a << "\n";
    cout << "Ater swap: " << b << "\n";
}
