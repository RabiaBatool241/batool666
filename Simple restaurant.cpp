#include <iostream>

using namespace std;

int main()
{
    int no_of_deals;
    int option_number, answer;
    char choice;
    cout << "Choose an option;\n";
    cout <<endl;
    cout << "Option 1;  Haleem(1 plate) = Rs.500"<<endl;
    cout << "Option 2;  Mutton(1 plate) = Rs.930"<<endl;
    cout << "Option 3;  Biryani(1 plate) = Rs.450"<<endl;
    cout << "Option 4;  Chocolate Icecream(2 scope) = Rs.200"<<endl;
    cout << "Option 5;  Fish(400gm) = Rs.1000"<<endl;
    cout << "Option 6;  Special Chappal kabab(4 pieces) = Rs.500"<<endl;
    cout << "Option 7;  Dumbah karahi(1 kg) = Rs.1500"<<endl;
    cout << "Option 8;  Chicken tikkah(8 pieces) = Rs.500"<<endl;

    cout <<endl;
    cin >> choice;

    cout << "Enter the number of deals\n";
    cin >> no_of_deals;
switch (choice)
{
case '1':
    cout << "Your deal is Haleem\n";
    cout << "Quantity of deal is : "<<1*no_of_deals<<" plates\n";
    answer = no_of_deals*500;
    cout <<"Total Price is : Rs."<<answer;
    break;

case '2':
    cout << "Your deal is Mutton\n";
    cout << "Quantity of deal is : "<<1*no_of_deals<<" plates\n";
    answer = no_of_deals*930;
    cout <<"Total Price is : Rs."<<answer;
    break;
case '3':
    cout << "Your deal is Biryani\n";
    cout << "Quantity of deal is : "<<1*no_of_deals<<" plates\n";
    answer = no_of_deals*450;
    cout <<"Total Price is : Rs."<<answer;
    break;
case '4':
    cout << "Your deal is Chocolate icecream\n";
    cout << "Quantity of deal is : "<<2*no_of_deals<<" scopes\n";
    answer = no_of_deals*200;
    cout <<"Total Price is : Rs."<<answer;
    break;
case '5':
    cout << "Your deal is Fish\n";
    cout << "Quantity of deal is : "<<400*no_of_deals<<" grams\n";
    answer = no_of_deals*1000;
    cout <<"Total Price is : Rs."<<answer;
    break;
case '6':
    cout << "Your deal is Special Chappal Kabab\n";
    cout << "Quantity of deal is : "<<4*no_of_deals<<" pieces\n";
    answer = no_of_deals*500;
    cout <<"Total Price is : Rs."<<answer;
    break;
 case '7':
    cout << "Your deal is Dumbah Karahi\n";
    cout << "Quantity of deal is : "<<1*no_of_deals<<" kg\n";
    answer = no_of_deals*1500;
    cout <<"Total Price is : Rs."<<answer;
    break;
 case '8':
    cout << "Your deal is Chicken Tikkah\n";
    cout << "Quantity of deal is : "<<8*no_of_deals<<" pieces\n";
    answer = no_of_deals*500;
    cout <<"Total Price is : Rs."<<answer;
    break;

 default:
    cout <<"Not a valid choice.\n"
        << "Choose again.\n";
}
cout <<endl;
return 0;
}
