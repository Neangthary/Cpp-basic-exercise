#include <iostream>
using namespace std;

// takes a number as input and prints its multiplication table upto 10. ដូចមេលេខ

int main()
{
    int a, n; // or declare variables int a, n = 0;

    cout << "Enter the number: ";
    cin >> a;

    for (n = 1; n <= 10; n++)
    {
        cout << a << " x " << n << " = " << a * n << "\n";
    }
}