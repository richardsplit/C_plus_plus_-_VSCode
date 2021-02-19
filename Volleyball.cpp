#include<iostream>
#include <cmath>
//#include<<sum<vector>
//#include<<sum<string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 
string year;
int p,h;
cin>>year>>p>>h;
double wknds=48-h;
wknds=wknds*3.0/4;
double holid=p *2.0/3;
double sum=wknds+h+holid;
if(year =="leap"){
  
    sum *=1.15;
}
else {
    sum=sum;
}
std::cout<<floor(sum)<<endl;
return 0;
  
}
