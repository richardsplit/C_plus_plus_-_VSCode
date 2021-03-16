#include<iostream>
#include <cmath>
//#include<vector>
//#include<<sum<string>
#include <climits>
//#include <algorithm>
//#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 
int age_lily;
double price_wm;
int price_toy;
cin>>age_lily;
cin>>price_wm;
cin>>price_toy;
//double present =0.00;

double sum;
 int MoneyYears=0;
 int toyYears=0;

for(int i=1;i<=age_lily;i++)
{
    if(i%2==0)
    {
     MoneyYears++;
    }
    else
    {
      toyYears ++ ;
    }
}
double money ;
for(int i=1;i<=MoneyYears;i++){
    money+=10.00*i;
}
money+=(price_toy*toyYears)-MoneyYears;
sum=abs(price_wm-money);
if(money>=price_wm){
std::cout.setf(ios::fixed);
std::cout.precision(2);
 std::cout<<"Yes! "<<sum<<std::endl;
}else{
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<"No! "<<sum<<std::endl;
}
return 0;

}
