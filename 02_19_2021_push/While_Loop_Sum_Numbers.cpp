#include<iostream>
//#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
//#include<string>
//#include <memory>
#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
string  input;
int sum;
int sum_final;
while (input != "Stop")
    {
        
        
        stringstream conv (input);
        //ili int currentNum=stoi(input)
        //sum +=currentNum;
        conv>>sum;
        sum_final+=sum;
        cin>>input;
    }
std::cout<<sum_final<<endl;
}
