#include<iostream>
#include <cmath>
//#include<vector>
//#include<<sum<string>
#include <climits>
#include <algorithm>
//#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 
int n;
cin>>n;

int left_sum=0;
int right_sum=0;

for(int i=1;i<=n;i++)
{
    int num;
    cin>>num;
    if(i%2==0){
        left_sum+=num;
    }
    else{
        right_sum+=num;
    }
}
int diff=abs(right_sum-left_sum);
if(diff == 0){
 std::cout<<"Yes"<<"\n"<<" Sum = "<<right_sum <<std::endl;
}else{
    std::cout<<"No"<<"\n"<<"Diff = "<<diff<<std::endl;
}
return 0;

}
