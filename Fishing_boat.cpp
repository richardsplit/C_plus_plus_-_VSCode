#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
int budget;
string season;
int fishers;
cin>>budget;
cin>>season;
cin>>fishers;
// double prc_spring=fishers*3000;
// double prc_summer=fishers*4200;
// double prc_winter=fishers*2600;
double price=0.0;

if(season=="Spring"){
price=3000.0;
    
}else if(season=="Summer" || season=="Autumn"){
    price =4200.0;
}else {
    price=2600.0;
}
if(fishers<=6){
    price=price-(0.1*price);
}else if(fishers>7 && fishers<=11){
    price=price-(0.15*price);
}else if(fishers>=12){
    price=price-(0.25*price);
}
if(fishers %2 ==0 && season !="Autumn" ){
    price =price * 0.95;
}
if(budget>=price){
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
std::cout<<"Yes! You have "<<budget-price<<" leva left."<<"\n";
}else {
     std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<"Not enough money! You need "<<price-budget<<" leva.";
}
return 0;
  
}
