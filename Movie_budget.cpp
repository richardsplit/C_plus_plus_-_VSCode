#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){

double m_budget;
int num_stat;
double prc__clth_per_stat;
cin>>m_budget;
cin>>num_stat;
cin>>prc__clth_per_stat;

double sum_dec=0.1*m_budget;
double sum_price_clth=num_stat*prc__clth_per_stat;

if(num_stat>150){
    sum_price_clth=sum_price_clth-sum_price_clth*0.10;
   
}
    
    double sum_movie=sum_dec+sum_price_clth;
   
     if(sum_movie>m_budget){
        
         std::cout<<"Not enough money!"<<std::endl;
         std::cout.setf(ios::fixed);
         std::cout.precision(2);
         std::cout<<"Wingard needs "<<sum_movie-m_budget<< " leva more."<<"\n";
     }
     else{
        
        std::cout<<"Action!"<<std::endl;
         std::cout.setf(ios::fixed);
         std::cout.precision(2);
         std::cout<<"Wingard starts filming with "<<m_budget-sum_movie<< " leva left."<<"\n";
     }


    }
