<<<<<<< HEAD
#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){
int str_points;
cin>>str_points;
double bonus_points=0.0;

if(str_points<=100){
    bonus_points=5;
}
else if(str_points>1000){
    
    bonus_points=0.1*str_points;
}
else {
    bonus_points=0.2*str_points;
}

if(str_points % 2==0){
    bonus_points=bonus_points+1;
}
else if(str_points %10 == 5){
    bonus_points=bonus_points+2;
}
        double sum_points=str_points+bonus_points;
        std::cout<<bonus_points<<endl;
        std::cout<<sum_points<<std::endl;
        return 0;
    }
=======
#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){
int str_points;
cin>>str_points;
double bonus_points=0.0;

if(str_points<=100){
    bonus_points=5;
}
else if(str_points>1000){
    
    bonus_points=0.1*str_points;
}
else {
    bonus_points=0.2*str_points;
}

if(str_points % 2==0){
    bonus_points=bonus_points+1;
}
else if(str_points %10 == 5){
    bonus_points=bonus_points+2;
}
        double sum_points=str_points+bonus_points;
        std::cout<<bonus_points<<endl;
        std::cout<<sum_points<<std::endl;
        return 0;
    }
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
