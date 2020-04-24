#include <iostream>
#include <string>

using namespace std;

int main()
{
    string roman;
    int integer;
    int piece;
    cout<<"Please enter a year between 1000 and 3000\n";
    cin>>integer;
    if((integer>=3000)||(integer<=1000))
    {
        cout <<endl <<"Invalid Integer"<<endl;
    }
    else{
        if(integer>=1000){
            piece = (integer/1000);
         for(int i=0; i<piece; i++)
         {
             roman += 'M';
         }
        }
        if(integer>=100){
            piece=(integer/100);

            if(piece==9) {
                roman += "CM"
            }
            else if (piece>=5){
                roman+='C';
            }
            else if(piece==4){
                roman +="CD";
            }
            else if(piece>=1){
                for(int i=0;i<piece;i++){
                    roman +='C';
                }
            }
            integer%=100;
        }

        if(integer>=10){
            piece=(integer/10);

            if(piece==9){
                roman += "XC";
            }
            else if(piece>=5){
                roman += 'X';
            }
        }
        else if(piece==4){
            roman += "XL";
        }
        else if(piece>=1){
            for (int i=0; i<piece; i++){
                roman+= 'X';
            }
        }
        integer%=10;
    }
    if(integer>=1){
        piece=integer;
        if(piece==9){
            roman +="IX";
        }
        else if(piece>=5){
            roman+="V";
            for(int i=0;i<piece-5;i++){

            }
        }
        else if(piece==4){
            roman+="IV";
        }
        else if(piece>=1){
            for (int i=0;i<piece;i++){
                roman += 'I';
            }
        }
    }
        cout <<"Roman Numeral: "<<roman<<endl;
        }







    return 0;
}
