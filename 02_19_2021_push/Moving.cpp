#include<iostream>
//#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
#include<string>
//#include <memory>
//#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
int width_free_space,lenght_free_space,height_free_space;
cin>>width_free_space>>lenght_free_space>>height_free_space;
   int volume =width_free_space*lenght_free_space*height_free_space;
   
   string input;
   cin>>input;
     while(input!="Done"){
         int boxes=stoi(input);
         volume -=boxes;
         if(volume<=0){
             break;
         }
         cin>>input;
     }
    // std::cout.setf(ios::fixed);
    // std::cout.precision(2);
    if(volume<=0){
        std::cout<<"No more free space! You need " <<volume * -1 <<" Cubic meters more."<<std::endl;
    }else{
    std::cout<<volume<<" Cubic meters left."<<std::endl;
    }
}
