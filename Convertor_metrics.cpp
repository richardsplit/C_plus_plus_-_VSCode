#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

     

int main (){

double distance;
cin>>distance;

std::string metric_input,metric_output;
cin>>metric_input>>metric_output;


double mm;
double cm;
double m;


if(metric_input=="mm"){
 
 
    distance=distance/1000;
    
}

else if(metric_input=="cm"){
    
    distance=distance/100;
    
}

if(metric_output=="mm"){
    std::cout.setf(ios::fixed);
     std::cout.precision(3);  
    std::cout<<distance*1000<<std::endl;
}
else if(metric_output=="cm"){
    std::cout.setf(ios::fixed);
     std::cout.precision(3);  
    std::cout<<distance*100<<std::endl;
}
else{
std::cout<<distance<<endl;
}
     return 0;

    }


