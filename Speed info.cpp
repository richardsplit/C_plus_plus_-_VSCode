#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){
double speed;
cin>>speed;

if(speed<=10)
{
    std::cout<<"slow"<<std::endl;
}
else if (speed<=50)
{
    std::cout<<"average"<<std::endl;
}
else if(speed<=150)
{
    std::cout<<"fast"<<std::endl;
}
else if(speed<=1000)
{
    std::cout<<"ultra fast"<<std::endl;
}
else {
    std::cout<<"extremely fast"<<std::endl;
}
        return 0;
    }
