#include<iostream>
//#include <cmath>
//#include<vector>
//#include<<sum<string>
//#include <climits>
#include <algorithm>
//#include<string>

using namespace std;

//using std::cout;
//using std::endl;
    


int main (){ 

int n;
cin>>n;

int number;
cin>>number;

int min_num =number;
int max_num=number;

for(int i=0;i<n-1;i++)
{
    int num;
  cin>>num;

  
      max_num=max(max_num,num);
          min_num=min(min_num,num);
    

}

 std::cout<<"Max number: "<<max_num<<std::endl;
std::cout<<"Min number: "<<min_num<<std::endl;  

return 0;


}