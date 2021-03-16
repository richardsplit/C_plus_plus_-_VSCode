#include<iostream>
//#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
//#include<string>
//#include <memory>
//#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
int deposit_op;
cin>>deposit_op;
double balance =0;
std::cout.setf(ios::fixed);
cout.precision(2);
for (int i=0;i<deposit_op;i++){
    double amount;
    cin>>amount;
    if(amount <0){
        std::cout<<"Invalid operation!" <<std::endl;
        break;
    }
    balance+=amount;
    cout<<"Increase: " <<amount<<std::endl;
}
std::cout<<"Total: " <<balance<<std::endl;
}
