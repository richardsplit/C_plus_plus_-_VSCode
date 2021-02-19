#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;


int main (){

// 1	Monday
// 2	Tuesday
// 3	Wednesday
// 4	Thursday
// 5	Friday
// 6	Saturday
// 7	Sunday
// -1	Error

int dayNumber;
cin>>dayNumber;

string dayAsString;

switch(dayNumber){
    case 1:
    dayAsString="Monday";
    break;

    case 2:
    dayAsString="Tuesday";
    break;

    case 3:
    dayAsString="Wednesday";
    break; 

    case 4:
    dayAsString="Thursday";
    break;

    case 5:
    dayAsString="Friday";
    break;

    case 6:
    dayAsString="Saturday";
    break;
    case 7:
    dayAsString="Sunday";
    break;
    
    default:
    dayAsString="Error";
    break;

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

std::cout<<dayAsString<<"\n";

return 0;
    }

