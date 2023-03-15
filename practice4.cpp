#include <iostream>
#include <cmath>
using namespace std;

/* Calculate the distance between 2 points on a surgace,
points are given with coordinates x and y*/

int main()
{
    double x1, x2, y1, y2;
    cout << "Enter the coordinates of the first point A: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point B: ";
    cin >> x2 >> y2;
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "The distance between this two points is : " << d;
    cout << endl;
    return 0;
}
