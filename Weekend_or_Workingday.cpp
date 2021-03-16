<<<<<<< HEAD
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

string  dayNumber;
cin>>dayNumber;

string output;
if(dayNumber=="Monday")
{
    output="Working day";
}else if (dayNumber=="Tuesday"){
    output="Working day";
}else if(dayNumber=="Wednesday"){
    output="Working day";
}else if(dayNumber=="Thursday"){
    output="Working day";
}else if(dayNumber=="Friday"){
    output="Working day";
}else if(dayNumber=="Saturday"){
    output="Weekend";
}else if(dayNumber=="Sunday"){
    output="Weekend";
}
else{
    output="Error";
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
=======
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

string  dayNumber;
cin>>dayNumber;

string output;
if(dayNumber=="Monday")
{
    output="Working day";
}else if (dayNumber=="Tuesday"){
    output="Working day";
}else if(dayNumber=="Wednesday"){
    output="Working day";
}else if(dayNumber=="Thursday"){
    output="Working day";
}else if(dayNumber=="Friday"){
    output="Working day";
}else if(dayNumber=="Saturday"){
    output="Weekend";
}else if(dayNumber=="Sunday"){
    output="Weekend";
}
else{
    output="Error";
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
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
