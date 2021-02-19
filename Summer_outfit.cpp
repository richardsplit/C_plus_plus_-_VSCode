#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
string time_ofday ;
int temp;
cin>>temp>>time_ofday;
string string_one="Sweatshirt";
string string_two="Shirt";
string string_three="T-Shirt";
string string_four="Swim Suit";
string shoes_sn="Sneakers";
string shoes_moc="Moccasins";
string shoes_bare="Barefoot";
string shoes_san="Sandals";
if(temp>=10 && temp<=18){
    if(time_ofday =="Morning"){
        std::cout<<"It's "<<temp<< " degrees, get your "<<string_one<<" and "<<shoes_sn<<"."<<endl; 
    }
   else if (time_ofday =="Afternoon" || time_ofday=="Evening"){std::cout<<"It's "<<temp<< " degrees, get your "<<string_two<<" and "<<shoes_moc<<"."<<endl;}
}
else if (temp>18 && temp <=24){
    if(time_ofday =="Morning"){ std::cout<<"It's "<<temp<< " degrees, get your "<<string_two<<" and "<<shoes_moc<<"."<<endl;}
    
    else if (time_ofday == "Afternoon") {std::cout<<"It's "<<temp<< " degrees, get your "<<string_three<<" and "<<shoes_san<<"."<<endl;}
   else if(time_ofday=="Evening") { std::cout<<"It's "<<temp<< " degrees, get your "<<string_two<<" and "<<shoes_moc<<"."<<endl;}
}
else if (temp>=25){
    if(time_ofday =="Morning"){ std::cout<<"It's "<<temp<< " degrees, get your "<<string_two<<" and "<<shoes_san<<"."<<endl;}
    
    else if (time_ofday =="Afternoon") {std::cout<<"It's "<<temp<< " degrees, get your "<<string_four<<" and "<<shoes_bare<<"."<<endl;}
   else if(time_ofday=="Evening") { std::cout<<"It's "<<temp<< " degrees, get your "<<string_two<<" and "<<shoes_moc<<"."<<endl;}
  }
return 0;
  
}
