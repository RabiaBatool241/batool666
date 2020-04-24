#include <iostream>

using namespace std;

int main()
{
    float y = 62.4;
    float weight, radius;
    double volume;
    double fb;

    cout << "This program is used to calculate the buoyant force of sphere and tells the\n";
    cout << "user that weither the sphere will float or sink"<<endl;
    cout << "Please enter the weight of the object in lbs:\n";
    cin >> weight;
    cout << "Please enter the radius in feet:\n";
    cin >> radius;
    volume=(4/3)*(3.14)*(radius*radius*radius);
    fb = (volume)*(y);
    cout << "The buoyant force is :"<<fb<<endl;
    {
        if (fb >= weight)
    {
    cout << "The sphere will float!" << endl;
    }
    else
    {
    cout << "The sphere will sink!" << endl;
    }
    }
    return 0;
}
