#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    int time_h,time_m;
    char nothing;
    double call_cost_minutes;
    int call_length;

    cout << "Enter the day as (sa) for Saturday: ";
    cin >> day;
    cout << "Please enter the time when the call started in 24-hours notation\n";
    cout << "as (13:30) for 01:30pm:";
    cin >> time_h>>nothing>>time_m;
    cout << "Please enter the call length in minutes: ";
    cin >>call_length;
    if ((day != "SA")||(day != "sa")||(day != "sA")||(day != "Sa")||(day != "SU")||(day != "su")||(day != "sU")||(day!="Su"))
    {
        if ((8 <= time_h)||(18<= time_h))
            call_cost_minutes = 0.4;
        else
        call_cost_minutes = 0.25;
    }
    else
    call_cost_minutes = 0.15;
    cout <<endl;
    cout << "The cost of the call is $" << call_cost_minutes*call_length;
    cout << "At the rate of $"<<call_cost_minutes<<" per minutes.\n";
    cout << endl;
    return 0;
}
