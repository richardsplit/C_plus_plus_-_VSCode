#include<iostream>
#include <cmath>
//#include<vector>
//#include<<sum<string>
#include <climits>
#include <algorithm>
//#include<string>

using namespace std;

//using std::cout;
//using std::endl;
    


int main (){ 

int n;
cin>>n;



int left_sum=0;
int right_sum=0;
int  sum=0;
for(int i=0;i<n;i++)
{
    int num;
    cin>>num;
    left_sum+=num;
}
for(int i =0;i<n;i++){
    int num;
    cin>>num;
    right_sum+=num;
}
int diff=abs(left_sum-right_sum);

if(diff==0){
 std::cout<<"Yes, sum = "<<left_sum<<std::endl;
}else{
    std::cout<<"No, diff = "<<diff<<std::endl;
}
return 0;


}
