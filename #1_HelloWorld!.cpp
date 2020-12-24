#include <iostream>
#include<climits>
#include<cmath>
#include<string>
using std::cout;
using std::endl;
using std::cin;//console in


int main ()
{
   std::string greeting = "What the hell";
   greeting.replace (5,3,"Heaven and ") ;
   cout <<greeting <<endl;

}