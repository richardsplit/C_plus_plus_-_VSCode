#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){

string product,city;
double quantity ;
cin>>product>>city>>quantity ;

//string output;
if(city == "Sofia"){
    if(product=="coffee"){std::cout<<quantity*0.50;}
        else if(product=="water"){std::cout<<quantity*0.80<<"\n";}
        else if(product=="beer"){std::cout<<quantity*1.20;}
        else if(product=="sweets"){std::cout<<quantity*1.45;}
        else if(product=="peanuts"){std::cout<<quantity*1.60;}
}else if(city == "Plovdiv"){
    if(product=="coffee"){std::cout<<quantity*0.40;}
    else if(product=="water"){std::cout<<quantity*0.70;}
    else if(product=="beer"){std::cout<<quantity*1.15;}
    else if(product=="sweets"){std::cout<<quantity*1.30;}
    else if(product=="peanuts"){std::cout<<quantity*1.50;}
}else if(city == "Varna"){
       if(product=="coffee"){std::cout<<quantity*0.45;}
    else if(product=="water"){std::cout<<quantity*0.70;}
    else if(product=="beer"){std::cout<<quantity*1.10;}
    else if(product=="sweets"){std::cout<<quantity*1.35;}
    else if(product=="peanuts"){std::cout<<quantity*1.55;}
}
// if(dayNumber==1){
//     dayAsString="Monday";
// }
// else if(dayNumber==2){
//     dayAsString="Tuesday";
// }
// else{
//     dayAsString="Error";
// }

return 0;
    }
