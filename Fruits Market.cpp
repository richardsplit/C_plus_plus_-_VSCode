#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
#include <iomanip>
//using std::cout;
//using std::endl;



int main (){

double price_strawberry;
cin>>price_strawberry;
double  amount_bananas;
cin>>amount_bananas;
double amount_oranges ;
cin>>amount_oranges;
double amount_raspberry;
cin>>amount_raspberry;
double amount_strawberry;
cin>>amount_strawberry;
double price_per_kg_raspberry=price_strawberry/2;
double price_per_kg_oranges=price_per_kg_raspberry -(0.4*price_per_kg_raspberry);
double price_per_kg_bananas=price_per_kg_raspberry-(0.8*price_per_kg_raspberry);
double sum_raspberry=amount_raspberry*price_per_kg_raspberry;
double sum_oranges=amount_oranges*price_per_kg_oranges;
double sum_bananas=amount_bananas*price_per_kg_bananas;
double sum_strawberrys=amount_strawberry*price_strawberry;
double sum_all_fruits=sum_raspberry+sum_oranges+sum_bananas+sum_strawberrys;
std::cout<<fixed<<setprecision(2)<<sum_all_fruits<<"\n";
return 0;
}
