#include <iostream>
#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
#include <iomanip>
//using std::cout;
//using std::endl;


        
    //void print_array();
     
    



int main (){


double price_trip;
double prc_puzzle=2.60;
double prc_doll=3.00;
double prc_teddy_bear=4.10;
double prc_minion=8.20;
double prc_truck=2.00;
double price;


int toys,num_puzzle,num_dolls,num_teddy_bear,num_minion,num_truck;
cin>>price_trip>>num_puzzle>>num_dolls>>num_teddy_bear>>num_minion>>num_truck;

price=(num_puzzle*prc_puzzle)+(num_dolls*prc_doll)+(num_teddy_bear*prc_teddy_bear)+(num_minion*prc_minion)+(num_truck*prc_truck);
toys=num_puzzle+num_dolls+num_teddy_bear+num_minion+num_truck;


if(toys>=50)
    {
      price=price-(price*0.25);
    }

price=price-(price*0.1);

 if(price<price_trip)
    {

                    std::cout.setf(ios::fixed);
                     std::cout.precision(2);  
                     double moneyneeded=price_trip-price;
                    std::cout<<"Not enough money! "<<moneyneeded<<" lv needed."<<"\n";
                }

     else
     {
        std::cout.setf(ios::fixed);
         std::cout.precision(2); 
         double enough_mon=price-price_trip; 
        std::cout<<"Yes! "<<enough_mon<<" lv left."<<"\n";
     }        

        return 0;

    }




