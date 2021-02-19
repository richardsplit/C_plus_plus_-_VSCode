#include<iostream>
//#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
//#include<string>
//#include <memory>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
string input;
string user;
string password;
cin>>user>>password;
while (input != password)
    {
        cin>>input;
    }
std::cout<<"Welcome "<<user<<"!"<<std::endl;
}
