//PARTNIORITE PUSKAT ZAQVKA I SOFTUNI TURSI HORA NA BAZATA NA TESTA /OCENKITE

//06.Easter competiion  https://judge.softuni.bg/Contests/Practice/Index/1637#10

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

    int countKozunak;
    cin>>countKozunak;
    cin.ignore();

    int maxPoints=INT_MIN;//BROQT MAKSIMALNITE TOCHKI
    string maxBaker;


    for (int kozunak = 1; kozunak < countKozunak; kozunak++)
    {
        string Baker;
        getline(cin,Baker);
        string commandasString;
        getline(cin,commandasString);
        int totalpoints=0;
        while(commandasString!="Stop")
        {

            int command=stoi(commandasString);
            totalpoints+=command;

            getline(cin,commandasString);
        }

        cout<<Baker<<" has "<<totalpoints<<" points."<<std::endl;

        if(totalpoints>maxPoints)
        {
            maxPoints=totalpoints;
            maxBaker=Baker;
            cout<<Baker<<" is the number 1!"<<std::endl;
        }
    }

    std::cout<<maxBaker<<" won competition with "<<maxPoints<<" points!"<<std::endl;

}