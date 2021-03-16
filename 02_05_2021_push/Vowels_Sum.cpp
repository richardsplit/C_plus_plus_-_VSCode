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

int sum =0;
for(int i=0;i<n.length();i++)
{
 
    char output=n[i];  
    if(output=='a'){
        sum +=1;
    }  
    else if(output=='e'){
        sum+=2;
    }
    else if(output=='i'){
        sum+=3;
    }
    else if(output=='o'){
        sum+=4;
    }
    else if(output=='u'){
        sum+=5;
    }
}
std::cout<<sum<<std::endl;
    
return 0;
  
}
