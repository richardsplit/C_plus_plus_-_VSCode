#include<iostream>
#include <cmath>
//#include<vector>
//#include<<sum<string>
#include <climits>
//#include <algorithm>
//#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 
int n;
cin>>n;
int num=1;
for(int i=0;i<=n;i+=2){
std::cout<<num<<std::endl;
num*=4;
}

return 0;

}