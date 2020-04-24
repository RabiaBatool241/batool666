#include <iostream>

using namespace std;

int main()
{
    int m, d;
    char ans;


        cout <<"Please enter the month of your Birthday: \n";
        cin >>m;

        cout <<"Please enter the day of your Birthday: \n";
        cin >>d;
     {
        if(m==3 && d>=21)
         cout <<"You are an Aries, Leo and Sagittarius!\n";
      else if(m==4 && d<=20)
         cout << "You are Aries, Leo and Sagittarius!\n";

      else if(m==4 && d>=21)
         cout << "You are Taurus, Virgo and Capricorn!\n";
      else if(m==5 && d<=21)
          cout << "You are Taurus, Virgo and Capricorn!\n";

        else if(m==5 && d>=21)
         cout << "You are Gemini, Libra and Aquarius!\n";
      else if(m==6 && d<=21)
          cout << "You are Gemini, Libra and Aquarius!\n";

       else if(m==6 && d>=22)
         cout << "You are Cancer, Scorpio and Pisces!\n";
      else if(m==7 && d<=22)
          cout << "You are Cancer, Scorpio and Pisces!\n";

       else if(m==7 && d>=23)
         cout << "You are Leo, Aries and Sagittarius!\n";
      else if(m==8 && d<=21)
          cout << "You are Leo, Aries and Sagittarius!\n";

       else if(m==8 && d>=22)
         cout << "You are Virgo, Taurus and Capricorn!\n";
      else if(m==9 && d<=23)
          cout << "You are Virgo, Taurus and Capricorn!\n";

           else if(m==9 && d>=24)
         cout << "You are Libra, Gemini and Aquarius!\n";
      else if(m==9 && d<=23)
          cout << "You are Libra, Gemini and Aquarius!\n";

           else if(m==10 && d>=24)
         cout << "You are Scorpio,Cancer and Pisces!\n";
      else if(m==11 && d<=22)
          cout << "You are Scorpio, Cancer and Pisces!\n";

           else if(m==11 && d>=23)
         cout << "You are Sagittarius, Aries and Leo!\n";
      else if(m==12 && d<=22)
          cout << "You are Sagittarius, Aries and Leo!\n";

           else if(m==12 && d>=23)
         cout << "You are Capricorn, Virgo and Taurus!\n";
      else if(m==1 && d<=20)
          cout << "You are Capricorn, Virgo and Taurus!\n";

           else if(m==4 && d>=21)
         cout << "You are Aquarius, Libra and Gemini!\n";
      else if(m==2 && d<=19)
          cout << "You are Aquarius, Libra and Gemini!\n";

           else if(m==2 && d>=20)
         cout << "You are Pisces, Scorpio and Cancer!\n";
      else if(m==3 && d<=20)
          cout << "You are Pisces, Scorpio and Cancer!\n";

          else
         cout << "Either day or month is invalid.\n";

      cout << "Would You life to Find Another Horoscope? (Please Type y or Y)\n";
      cin >> ans;
    }
    while(ans == 'y' || ans == 'Y');

    cout << " Good Bye!\n";



    return 0;
}
