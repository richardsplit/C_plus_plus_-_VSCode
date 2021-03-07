EXAM PROGRAM 01

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

double pricePerPage;
cin>>pricePerPage;

double pricePerCover;
cin>>pricePerCover;

int promo_paper;
cin>>promo_paper;

double price_designer;
cin>>price_designer;

int price_team;
cin>>price_team;



double price_print_noprom=(pricePerPage*899)+(pricePerCover*2);

promo_paper=promo_paper*1.0;

double price_pr_nprm=(price_print_noprom*promo_paper)/100;

 double price_print_prom=price_print_noprom-price_pr_nprm;

//cout<<price_print_prom<<endl;

 double price_print_prom_design=price_print_prom+price_designer;
 //cout<<price_print_prom_design<<endl;

double prc_team=(price_print_prom_design*price_team)/100;

 double price_print_prom_design_team=price_print_prom_design-prc_team;

 cout.setf(ios::fixed);
 cout.precision(2);
 std::cout<<"Avtonom should pay " <<price_print_prom_design_team<<" BGN."<<std::endl;

}

