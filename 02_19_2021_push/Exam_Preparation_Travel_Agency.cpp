pb-exam za problemi 

//03. Travel Agency //https://judge.softuni.bg/Contests/Practice/Index/1745#5

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
 string town,typePackage,discount;
 cin>>town>>typePackage>>discount;

 int days;
 cin>>days;

bool isVaild=true;
double pricePerDay=0;

    if(days<1){
        cout<<"Days must be positive number."<<endl;
    }
    else{
        if(days>7){
            days=days-1;
        }
     if(town=="Bansko" || town=="Borovets")
     {
            if(typePackage=="noEquipment")
            {
                pricePerDay=80;
                    if(discount=="yes"){
                        pricePerDay=76;
                    }
            }
            else if(typePackage=="with equipment")
            {
                pricePerDay=100;
                if(discount=="yes"){
                    pricePerDay=90;
                }
            }
            else{
                std::cout<<"Invalid input!"<<endl;
                isVaild=false;
            }
      } 
      else if(town=="Varna" || town=="Burgas")
      {
          if(typePackage=="nobreakfast")
          {
              pricePerDay=100;
              if(discount=="yes"){
                  pricePerDay=93;
              }
          }
          else if(typePackage=="withbreakfast")
          {
             pricePerDay=130;
             if(discount=="yes")
             {
                 pricePerDay=114.40;
             }
          }
        else
        {
            std::cout<<"invalid input!"<<endl;
              isVaild=false;
        }
      }
      else{ std::cout<<"Invalid input!"<<endl;
          isVaild=false;}  
    }

    if(isVaild=true)
        {
            double totalPrice=days*pricePerDay;
            cout.setf(ios::fixed);
            cout.precision(2);
            std::cout<<"The price is "<<totalPrice<<"lv! Have a nice time"<<endl;
        }
}