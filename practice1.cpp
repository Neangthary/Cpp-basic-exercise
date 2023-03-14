#include <iostream>
using namespace std;

// Write a program in C++ to check whether a number is positive, negative or zero.

int main()
{
     int num;
     cout << "Enter the number: " << endl;
     cin >> num;

     if (num > 0)
     {
          cout << num << "  is a positive number";
     }
     else if (num < 0)
     {
          cout << num << "  is negative number";
     }
     else
     {
          cout << num << "  is ZERO number";
     }
     return 0;
}
