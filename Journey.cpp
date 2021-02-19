<<<<<<< HEAD
#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
double budget;
cin>>budget;
string season;
cin>>season;
string bg="Bulgaria";
string balk="Balkans";
string europe="Europe";
string camp="Camp";
string rest_hot="Hotel";
string location;
double price ;
if(season =="summer")
{
    if(budget<=100)
    {
            price =budget*0.30;
        location=bg;
    }
    else if(budget<=1000){
        price =budget*0.40;
        location=balk;
        }
}
else if(season =="winter")
{
        if(budget<=100)
        {
                price = budget*0.70;
             location=bg;
        }
        else if(budget<=1000)
        {
            price =budget*0.80;
             location=balk;
        }
  
}
if(budget>1000)
{
     location=europe;
    price=budget*0.90;
}
std::cout.setf(ios::fixed);
std::cout.precision(2);
std::cout<<"Somewhere in "<<location<<endl;
if(season=="winter" || budget>1000){
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<rest_hot<<" - "<<price<<endl;
}
else{
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<camp<<" - "<<price<<endl;
}

return 0;
  
}
=======
#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
double budget;
cin>>budget;
string season;
cin>>season;
string bg="Bulgaria";
string balk="Balkans";
string europe="Europe";
string camp="Camp";
string rest_hot="Hotel";
string location;
double price ;
if(season =="summer")
{
    if(budget<=100)
    {
            price =budget*0.30;
        location=bg;
    }
    else if(budget<=1000){
        price =budget*0.40;
        location=balk;
        }
}
else if(season =="winter")
{
        if(budget<=100)
        {
                price = budget*0.70;
             location=bg;
        }
        else if(budget<=1000)
        {
            price =budget*0.80;
             location=balk;
        }
  
}
if(budget>1000)
{
     location=europe;
    price=budget*0.90;
}
std::cout.setf(ios::fixed);
std::cout.precision(2);
std::cout<<"Somewhere in "<<location<<endl;
if(season=="winter" || budget>1000){
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<rest_hot<<" - "<<price<<endl;
}
else{
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<camp<<" - "<<price<<endl;
}

return 0;
  
}
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
