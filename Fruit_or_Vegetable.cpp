#include <iostream>
#include <math.h>
#include <vector>
//#include <string>
using namespace std;
//using std::cout;
//using std::endl;


int main (){




string product;
cin>>product;


//string output;

if(product=="banana" || product=="apple" || product=="kiwi" || product =="cherry" || product =="lemon" || product=="grapes"){std::cout<<"fruit";}
else if(product=="tomato" || product =="cucumber" || product=="pepper" || product=="carrot" ){std::cout<<"vegetable";}
else {
    std::cout<<"unknown";
}
return 0;
    }
