#include<iostream>
//#include <cmath>
//#include<vector>
//#include<<sum<string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 
string n;
getline(cin,n);


for(int i=0;i<n.length();i++)
{
 
    char output=n[i];    
    std::cout<<output<<std::endl;
    
}
return 0;
  
}