#include <iostream>
using namespace std;

// Write a program in C++ to calculate the volume of a sphere.
int main()
{
    int r;
    float vsphere;
    cout << "Enter the radius value: ";
    cin >> r;
    vsphere = (4 * 3.14 * r * r * r) / 3;
    cout << "The volume of shere is: " << vsphere << endl;
}