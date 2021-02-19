#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){



string fruit,day_of_Week;
double quantity;
cin>>fruit>>day_of_Week>>quantity;

//string output;

if(day_of_Week =="Saturday" || day_of_Week == "Sunday"){
    if(fruit=="banana"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*2.70<<endl;}
     else if(fruit=="apple"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*1.25<<endl;}
    else if(fruit=="orange"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*0.90<<endl;}
    else if(fruit=="grapefruit"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*1.60<<endl;}
    else if(fruit=="kiwi"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*3.00<<endl;}
    else if(fruit=="pineapple"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*5.60<<endl;}
    else if(fruit=="grapes"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*4.20<<endl;}
    else{std::cout<<"error";}
} 
else if(day_of_Week=="Monday" || day_of_Week=="Tuesday" || day_of_Week=="Wednesday" || day_of_Week=="Thursday" || day_of_Week=="Friday" ){
     if(fruit=="banana"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*2.50<<endl;}
     else if(fruit=="apple"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*1.20<<endl;}
    else if(fruit=="orange"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*0.85<<endl;}
    else if(fruit=="grapefruit"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*1.45<<endl;}
    else if(fruit=="kiwi"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*2.70<<endl;}
    else if(fruit=="pineapple"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*5.50<<endl;}
    else if(fruit=="grapes"){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<quantity*3.85<<endl;}
    else{std::cout<<"error";}
} 
else{std::cout<<"error";}
return 0;
    }
