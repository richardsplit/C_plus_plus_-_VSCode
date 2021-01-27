#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){


int hour ;
string week_input;
cin>>hour>>week_input;

//string output;
if(hour>=10 && hour<=18 && week_input !="Sunday" ){
    
std::cout<<"open";
}else{
std::cout<<"closed";
}

return 0;
    }
