#include<iostream>
#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
#include<string>
//#include <memory>
//#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
double change;
cin>>change;
int changeinST=change*100;
int count =0;
    while(changeinST>0)
    {
        if(changeinST>=200)
        {
        changeinST-=200;
         count++;
        }
        else if(changeinST>=100)
        {
            changeinST-=100;
             count++; 
        }
        else if(changeinST>=50)
        {
            changeinST-=50;
             count++; 
        }
         else if(changeinST>=20)
        {
            changeinST-=20;
             count++; 
        }
         else if(changeinST>=10)
        {
            changeinST-=10;
             count++; 
        }
         else if(changeinST>=5)
        {
            changeinST-=5;
             count++; 
        }
          else if(changeinST>=2)
        {
            changeinST-=2;
             count++; 
        }
          else if(changeinST>=1)
        {
            changeinST-=1;
             count++; 
        }
    }
    std::cout<<count<<std::endl;
}
