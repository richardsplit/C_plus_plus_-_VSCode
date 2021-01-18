#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
#include <iomanip>
//using std::cout;
//using std::endl;



int main (){

int lenght;
cin>> lenght;
int width;
cin>>width;
int height;
cin>>height;
double percent;
cin >>percent;

double capacity_aquarium =lenght*width*height;
double capacity_liters=capacity_aquarium*0.001;
//double sum_percent=percent*0.01;
double actual_req_liters=capacity_liters-capacity_liters*(percent/100);
std::cout<<fixed<<setprecision(2)<<actual_req_liters<<"\n";
return 0;
}
