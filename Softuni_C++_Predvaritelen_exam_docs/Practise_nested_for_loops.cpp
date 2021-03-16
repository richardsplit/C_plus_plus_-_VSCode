#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

int n ;
cin>>n;

     for(int number=1111;number<=9999;number++)
    {
        int thousand=number/1000%10;
        int hundreds=number/100%10;
        int tens= number/10%10;
        int units= number%10;

    bool check1=thousand !=0 && n%thousand==0;
    bool check2=hundreds !=0 && n%hundreds==0;
    bool check3=tens !=0 && n%tens==0;
    bool check4=n%units==0;

        if(check1 && check2 && check3 && check4){
            cout<<number<<" "<<std::endl;
        }
    }
}

//Alternative solution
/*
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

int n ;
cin>>n;

for(int thousands=1;thousands<=9;thousands++){
    for(int hundreds=1;hundreds<=9;hundreds++){
        for(int tens=1;tens<=9;tens++){
            for (int units = 0; units <= units; units++)
            {
                 bool check1=n%thousands==0;
                bool check2=n%hundreds==0;
                bool check3= n%tens==0;
                bool check4=n%units==0;

                    if(check1 && check2 && check3 && check4){
                        cout<<thousands<<hundreds<<tens<<units<<" "<<std::endl;
                    }
            }
            
        }
    }
}
   
}
*/