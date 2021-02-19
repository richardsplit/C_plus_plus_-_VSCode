<<<<<<< HEAD
#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

     

int main (){
 double record_sec,distance_meters,time_secper_swim;
 cin>>record_sec>>distance_meters>>time_secper_swim;

double swim_time= distance_meters*time_secper_swim;


double delayTime =floor(distance_meters/15)*12.5;

//double swm_dist_secs_15met_add =distance_meters/15;

//swm_dist_secs_15met_add=swm_dist_secs_15met_add*12.5;

double sum_time=swim_time+delayTime;

cout.setf(ios::fixed);
cout.precision(2);

if(sum_time<record_sec){
    
   
    std::cout<<"Yes, he succeeded! The new world record is "<<sum_time<<" seconds."<<std::endl;
}
else{
     std::cout<<"No, he failed! He was "<<sum_time-record_sec<<" seconds slower."<<std::endl;
}

return 0;
=======
#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

     

int main (){
 double record_sec,distance_meters,time_secper_swim;
 cin>>record_sec>>distance_meters>>time_secper_swim;

double swim_time= distance_meters*time_secper_swim;


double delayTime =floor(distance_meters/15)*12.5;

//double swm_dist_secs_15met_add =distance_meters/15;

//swm_dist_secs_15met_add=swm_dist_secs_15met_add*12.5;

double sum_time=swim_time+delayTime;

cout.setf(ios::fixed);
cout.precision(2);

if(sum_time<record_sec){
    
   
    std::cout<<"Yes, he succeeded! The new world record is "<<sum_time<<" seconds."<<std::endl;
}
else{
     std::cout<<"No, he failed! He was "<<sum_time-record_sec<<" seconds slower."<<std::endl;
}

return 0;
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
    }