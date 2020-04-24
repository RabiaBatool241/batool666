#include <iostream>

using namespace std;

int main()
{
int num,factorial=1;

cout<< "enter the number to find its factorial" << endl;
cin>>num;
for(int a=1; a<=num; a++)
{
    factorial=factorial*a;
}
cout<< "the factorial of 5 is:"<<factorial<< endl;
return 0;
}
