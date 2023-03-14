#include <iostream>
#include <ctime>
using namespace std;

// a program to display the current data and time

int main()
{
    time_t now = time(0); // corrent data and time on the current system

    char *data_time = ctime(&now); // convert now to string form

    cout << "The current data and time is : " << data_time << endl;
}
