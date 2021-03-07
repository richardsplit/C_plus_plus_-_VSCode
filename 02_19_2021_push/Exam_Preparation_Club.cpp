05.CLUB
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

double needSum;
cin>>needSum;
cin.ignore();
string command;
getline(cin,command);

double earnedmoney=0;
while(command!="Party!")
    {
            string cocktail=command;
            int count;
            cin>>count;
            cin.ignore();
            
            int moneyForcocktail=count*cocktail.length();
            earnedmoney+=moneyForcocktail;
                
                if(moneyForcocktail % 2== 1)
                {
                double  finalPriceOrder=moneyForcocktail - 0.25 * moneyForcocktail;
                    earnedmoney+=finalPriceOrder;
                }
                else
                {
                    earnedmoney+=moneyForcocktail;
                }

            if(earnedmoney>=needSum)
            {
                cout<<"Target acquired."<<endl;
                break;
            }
        getline(cin,command);

    }
        cout.setf(ios::fixed);
        cout.precision(2);
        if(command=="Party")
        {
        cout<<"We need "<<needSum-earnedmoney<<" leva more."<<endl;   
        }

        cout<<"Club income - "<<earnedmoney<<" leva."<<std::endl;

}