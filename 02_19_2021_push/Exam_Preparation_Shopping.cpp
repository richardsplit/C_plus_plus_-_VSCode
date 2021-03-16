02.Shopping	https://judge.softuni.bg/Contests/Practice/Index/1745#3

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

int budget ;
cin>>budget;

int countCards,countCPU,countRam;
cin>>countCards>>countCPU>>countRam;

double sumCards=countCards*250;
double sumCpu=countCPU*(0.35*sumCards);
double sumRam=countRam*(0.10*sumCards);

double totalsum=sumCards+sumCpu+sumRam;

    if(countCards>countCPU)
        {
            totalsum=totalsum-0.15*totalsum;
        }

cout.setf(ios::fixed);
cout.precision(2);

if(budget>=totalsum){
    std::cout<<"You have "<<budget-totalsum<<" leva left!"<<std::endl;
}else{
    std::cout<<"Not enough money!You need "<<totalsum-budget<<" leva more!"<<std::endl;
}

}
