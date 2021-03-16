//EXAM PROGRAM 02

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

int planned_cpu,count_workers,working_days;
cin>>planned_cpu>>count_workers>>working_days;

double price_cpu=110.10;

int sum_hours=count_workers*working_days*8;

double created_cpu=floor(sum_hours/3);

     cout.setf(ios::fixed);
     cout.precision(2);

    if(created_cpu<planned_cpu){
       double need_cpu=planned_cpu-created_cpu;

        std::cout<<"Losses: -> "<<need_cpu*price_cpu<<" BGN"<<std::endl;
    
    }
    else
    {
        double profit_cpu=created_cpu-planned_cpu;
        std::cout<<"Profit: -> "<<profit_cpu*price_cpu<<" BGN"<<std::endl;
    }


}

