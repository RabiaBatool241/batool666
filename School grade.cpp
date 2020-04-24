#include <iostream>

using namespace std;

int main()
{
    int total_marks;
    double obt_marks,percentage;
    cout << "Enter total marks:";
    cin >> total_marks;
    cout << endl;
    cout << "Please enter the obtained marks:";
    cin >> obt_marks;
    percentage = obt_marks/total_marks*100;
    cout << "Your percentage is = " << percentage<< "%"<<endl;

    if (percentage >= 90)
    {
        cout << "Your Grade = A, Excellent\n";
    }
    if ((percentage <90 )&&(percentage>= 70))
    {
      cout << "Your Grade = B, Very good\n";
    }
    if ((percentage <70)&&(percentage>=50))
    {
      cout << "Your Grade = C, You pass but work hard.";
    }
    if ((percentage<50)&&(percentage>=34))
    {
      cout << "Your Grade = D, Not good, work hard\n";
    }
    if ((percentage<33)&&(percentage>=0))
    {
        cout << "Your Grade = F, You are fail, you need to work hard.\n";
    }
    return 0;
}





