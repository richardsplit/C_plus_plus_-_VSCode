#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){



string day_of_week;
cin>>day_of_week;

//string output;


 if(day_of_week=="Monday" || day_of_week=="Tuesday" || day_of_week =="Friday")
 { std::cout<<"12"<<"\n";}
  else if(day_of_week=="Wednesday"|| day_of_week=="Thursday")
  {std::cout<<"14";}
    else if(day_of_week=="Saturday" || day_of_week=="Sunday")
    {std::cout<<"16";}
// else if(product=="tomato" || product =="cucumber" || product=="pepper" || product=="carrot" ){std::cout<<"vegetable";}
// else {
//     std::cout<<"unknown";
// }
return 0;
    }
