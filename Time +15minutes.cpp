#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){
double start_hour;
double start_minutes;
cin>>start_hour>>start_minutes;
int total_minutes=start_hour*60+start_minutes;
int final_hour=(15+total_minutes)/60;
int final_minutes=(15+total_minutes)%60;

if(final_hour>=24)
{
final_hour =final_hour - 24;
//std::cout<<final_hour<<"\n";
}

    if(final_minutes<10){
        std::cout<<final_hour<<":0"<<final_minutes<<std::endl;
    }
    else{
        std::cout<<final_hour<<":"<<final_minutes<<std::endl;
    }

     return 0;
    }
