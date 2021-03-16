#include<iostream>
#include <cmath>
//#include<vector>
//#include<<sum<string>
#include <climits>
//#include <algorithm>
//#include<string>

using namespace std;

//using std::cout;
//using std::endl;
    


int main (){ 

int n;
cin>>n;

double OddSum=0.00;
double OddMin=1000000000.0;
double OddMax=-1000000000.0;
double EvenSum=0.00;
double EvenMin=1000000000.0;
double EvenMax=-1000000000.0;

double even;
double odd;
for(int i=1;i<=n;i++){
    double num;
    cin>>num;

    if(i % 2== 0)
    {
        EvenSum+=num;
        if(num>EvenMax){
            EvenMax=num;
        }

         if(num<EvenMin){
            EvenMin=num;
        }
    }
    else
    {
        OddSum+=num;

        if(num>OddMax)
        {
            OddMax=num;
        }

         if(num<OddMin)
         {
            OddMin=num;
        }
    }
}



// // for(int i=0;i<=EvenSum;i++){
// if(i>EvenMax){
//     EvenMax=i;
// }
//  if(EvenMin>i){
//     EvenMin=i;
// }
// // }

// for(int i=0;i<=OddSum;i++){
//     if(i>OddMax){
//         OddMax=i;
//     }
//  if(OddMin>i){
//         OddMin=i;
//     }
// }


std::cout.setf(ios::fixed);
std::cout.precision(2);

std::cout<<"OddSum="<<OddSum<<","<<std::endl;

if(OddMin== 1000000000.0)
    {
    std::cout<<"OddMin=No,"<<std::endl;
    }
else
    {
        std::cout<<"OddMin="<<OddMin<<","<<std::endl;
    }


if(OddMax == -1000000000.0)
    {
    std::cout<<"OddMax=No,"<<std::endl;
    }
else 
    {
        std::cout<<"OddMax="<<OddMax<<","<<std::endl;
    }


std::cout<<"EvenSum="<<EvenSum<<","<<std::endl;


if(EvenMin==1000000000.0)
    {
    std::cout<<"EvenMin=No,"<<std::endl;
    }
else
    {
        std::cout<<"EvenMin="<<EvenMin<<","<<std::endl;
    }


if(EvenMax == -1000000000.0)
    {
    std::cout<<"EvenMax=No"<<std::endl;
    }
else 
    {
        std::cout<<"EvenMax="<<EvenMax<<std::endl;
    }

return 0;


}
