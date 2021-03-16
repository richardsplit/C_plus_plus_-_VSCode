<<<<<<< HEAD
#include<iostream>
//#include<<sum<math.h>
//#include<<sum<vector>
//#include<<sum<string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
string month;
int num_nights;
cin >> month >> num_nights;
double total_priceApart,totalpriceStudio;
if(month=="May" || month=="October"){
    totalpriceStudio=num_nights*50;
    total_priceApart=num_nights*65;
    if(num_nights>7 && num_nights<=14){
         totalpriceStudio *=0.95;
      
    }else if(num_nights>14){
         totalpriceStudio *=0.7;
    }
}
else if(month=="June" || month=="September"){
    totalpriceStudio=num_nights*75.20;
    total_priceApart=num_nights*68.70;
    if(num_nights>14){
         totalpriceStudio *=0.8;
    }
}
else if(month=="July" || month=="August"){
    totalpriceStudio=num_nights*76.00;
    total_priceApart=num_nights*77.00;
}
if(num_nights>14 ){
    total_priceApart *=0.9;
}
std::cout.setf(ios::fixed);
std::cout.precision(2);
std::cout<<"Apartment: " <<total_priceApart << " lv."<<endl;
std::cout<<"Studio: " <<totalpriceStudio << " lv."<<endl;
return 0;
  
}
=======
#include<iostream>
//#include<<sum<math.h>
//#include<<sum<vector>
//#include<<sum<string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
string month;
int num_nights;
cin >> month >> num_nights;
double total_priceApart,totalpriceStudio;
if(month=="May" || month=="October"){
    totalpriceStudio=num_nights*50;
    total_priceApart=num_nights*65;
    if(num_nights>7 && num_nights<=14){
         totalpriceStudio *=0.95;
      
    }else if(num_nights>14){
         totalpriceStudio *=0.7;
    }
}
else if(month=="June" || month=="September"){
    totalpriceStudio=num_nights*75.20;
    total_priceApart=num_nights*68.70;
    if(num_nights>14){
         totalpriceStudio *=0.8;
    }
}
else if(month=="July" || month=="August"){
    totalpriceStudio=num_nights*76.00;
    total_priceApart=num_nights*77.00;
}
if(num_nights>14 ){
    total_priceApart *=0.9;
}
std::cout.setf(ios::fixed);
std::cout.precision(2);
std::cout<<"Apartment: " <<total_priceApart << " lv."<<endl;
std::cout<<"Studio: " <<totalpriceStudio << " lv."<<endl;
return 0;
  
}
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
