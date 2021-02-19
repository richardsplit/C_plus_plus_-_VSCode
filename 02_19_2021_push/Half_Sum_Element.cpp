#include<iostream>
#include <cmath>
//#include<vector>
//#include<<sum<string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 
    int n;
   cin>>n;
 int max=INT_MIN;
 int sum=0;
 for(int number =1 ;number <=n;number++)
   {
     int value ;
     cin>>value;
     sum +=value;
     if(value> max){
       max=value;
     }
   }
   int sumOther=sum-max;
   if( max == sumOther){
   std::cout<<"Yes"<<endl;
   std::cout<<"Sum = "<<max<<endl;
   }else{
     std::cout<<"No"<<endl;
     std::cout<<"Diff = "<<abs(max-sumOther)<<endl;
   }
return 0;
  
}
