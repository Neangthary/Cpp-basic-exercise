#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;

    cout << " Enter three number: "
            "\n";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << "The largest number is: " << num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "The largest number is: " << num2;
    }
    else
        cout << "The largest number is: " << num3;

    return 0;
}
