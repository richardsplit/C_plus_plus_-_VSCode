#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;


int main (){


double  age;
string gender;
cin>>age>>gender;

string output;

if(age >= 16 && gender == "m"){
output="Mr.";
}else if(age >= 16 && gender == "f"){
output="Ms.";
}else if(age < 16 && gender == "m"){
    output="Master ";

}else if(age < 16 && gender == "f"){
output="Miss" ;
}
else {
    output="unknown";
}

// if(dayNumber==1){
//     dayAsString="Monday";
// }
// else if(dayNumber==2){
//     dayAsString="Tuesday";
// }
// else{
//     dayAsString="Error";
// }

std::cout<<output<<"\n";

return 0;
    }
