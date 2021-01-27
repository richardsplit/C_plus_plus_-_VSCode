#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
string type_flower ;
int quantity,budget;
cin>>type_flower>>quantity>>budget;
double rose=quantity*5;
double dahlias=quantity*3.80;
double tullip=quantity*2.80;
double narcis=quantity*3;
double gladiola=quantity*2.50;
double price ;
double left_money;
if(type_flower=="Roses"){
if(quantity>80){
price=rose-(rose*0.10);
    }
    else{
        price=rose;
    }
}
else if(type_flower=="Dahlias"){
    if(quantity>90){
        price=dahlias-(dahlias*0.15);
    }else{
        price=dahlias;
    }
}
else if(type_flower=="Tulips"){
    if(quantity>80){
        price=tullip-(tullip*0.15);
    }else{ 
        price=tullip;
    }
}
else if(type_flower=="Narcissus"){
    if(quantity<120){
        price=narcis*1.15;
    }else{
        price=narcis;
    }
}
else if(type_flower=="Gladiolus"){
    if(quantity<80){
        price=gladiola*1.20;
    }else{
        price=gladiola;
    }
}

if(budget>=price){
left_money=budget-price;
std::cout.setf(ios::fixed);
std::cout.precision(2);
std::cout<<"Hey, you have a great garden with "<<quantity<<" "<<type_flower<<" and "<<left_money<<" leva left."<<endl;
}else
{
    left_money=price-budget;
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<"Not enough money, you need "<<left_money<<" leva more."<<endl;
}
return 0;
  
}
