#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){
string type_animal;
cin>>type_animal;
string output;
if(type_animal=="dog"){
output="mammal";
}else if(type_animal=="snake" || type_animal=="crocodile" || type_animal=="tortoise"){
    output="reptile";
}else {
    output="unknown";
}
// if(dayNumber==1){
//     dayAsString="Monday";
// }
// else if(dayNumber==2){
//     dayAsString="Tuesday";
// }
// else{
//     dayAsString="Error";
// }
std::cout<<output<<"\n";
return 0;
    }
