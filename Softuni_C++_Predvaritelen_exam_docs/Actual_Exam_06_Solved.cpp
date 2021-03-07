//REAL EXAM 06 SOLUTION

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

int n ;
cin>>n;

    // for(int number=1111;number<=9999;number++)
    // {
        int thousand=n/1000%10;
        int hundreds=n/100%10;
        int tens=n/10%10;
        int units=n%10;


    for (int i=1;i<=units;i++){
        for(int j=1;j<=tens;j++){
            for(int k=1;k<=hundreds;k++){
             int  result= i*j*k;
             std::cout<<i<<" * "<<j<<" * "<<k<<" = "<<result <<std::endl;
             
            }
        }
      }
    

}

