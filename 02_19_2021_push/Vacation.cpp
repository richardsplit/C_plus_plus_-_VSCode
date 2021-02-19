#include<iostream>
#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
#include<string>
//#include <memory>
//#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
double needMoney,money;
cin>>needMoney>>money;
int countAlldays=0;
int countSpendDays=0;
    while (money<needMoney)
    {
        string action;
        cin>>action;
        double moneyAction;
        cin>>moneyAction;
        countAlldays++;
        if(action=="save"){
            money+=moneyAction;
            countSpendDays=0;
        }else if(action=="spend"){
            countSpendDays++;
            money-=moneyAction;
            if(money<0){
                money=0;
            }
        }
        if(countSpendDays == 5){
            std::cout<<"You can't save the money."<<std::endl;
            std::cout<<countAlldays<<std::endl;
            break;
        }
    }
    if(money>= needMoney){
        std::cout<<"You saved the money for " <<countAlldays<<" days."<<std::endl;
    }
}
