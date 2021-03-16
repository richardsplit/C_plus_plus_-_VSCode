#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

int countPeople;
cin>>countPeople;

double priceEnter,priceSunbed,priceUmbrella;
cin>>priceEnter>>priceSunbed>>priceUmbrella;


double totalPriceEnter=countPeople*priceEnter;
int countSunbed =ceil(0.75*countPeople); //zakruglqva do po golqmoto

double totalPriceSunbeds =countSunbed*priceSunbed;

int countUmbrellas=ceil(countPeople/2);
double totalPriceUmbrellas =countUmbrellas*priceUmbrella;

cout.setf(ios::fixed);
cout.precision(2);
double totalPrice=totalPriceEnter+totalPriceSunbeds+totalPriceUmbrellas;
cout<<totalPrice<<" lv.";

}