#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A,B, population_of_a, population_of_b;
    int n=1;
    float Ra,Rb,Ya,Yb,Za,Zb;
    cout<<"Enter population of town A and town B"<<endl;
    cin>>population_of_a>>population_of_b;
    cout<<"Enter Growth rate of Town A and Town B in percentage%"<<endl;
    cin>>Ra>>Rb;
    Ya=(1+Ra/100);
    Yb=(1+Rb/100);
    for(;;)
    {
        n++;
        Za=pow(Ya,n);
        Zb=pow(Yb,n);
        A=population_of_a*Za;
        B=population_of_b*Zb;
    {
        if(A>=B)
        {
            cout<<"The population of town A after"<<n<<"years is"<<A<<endl;
            cout<<"The population of town B after"<<n<<"years is"<<B<<endl;
            break;
            cout<<endl;

        }
    }
    }
    return 0;
}
