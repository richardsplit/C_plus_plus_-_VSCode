//Program 02 EXAM 

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

double pocket_money;
double profit_oneday_sale;
double expenses_allperiod;
double price_gift;

cin>>pocket_money>>profit_oneday_sale>>expenses_allperiod>>price_gift;

double sum_saved_money=pocket_money*5;
double sum_profit_money=profit_oneday_sale*5;

double sum_saved_profit_money=sum_saved_money+sum_profit_money;

double sum_spm=sum_saved_profit_money-expenses_allperiod;
 cout.setf(ios::fixed);
 cout.precision(2);

if(sum_spm>price_gift){
cout<<"Profit: "<<sum_spm<<" BGN, the gift has been purchased."<<std::endl;
}
else{
    cout<<"Insufficient money: "<<price_gift-sum_spm<<" BGN."<<std::endl;
}

}
