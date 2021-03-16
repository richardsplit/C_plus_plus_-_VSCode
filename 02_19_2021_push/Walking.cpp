#include<iostream>
#include <cmath>
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
int targetSteps=10000;
string command;
getline(cin,command);
    int walkedsteps=0;
    while(command!="Going home"){
        walkedsteps+=stoi(command);
        if(walkedsteps>=targetSteps){
            std::cout<<"Goal reached! Good job!"<<endl;
            break;
        }
    getline(cin,command);
    }
    if(command =="Going home"){
        int stepsToHome;
        cin>>stepsToHome;
        walkedsteps+=stepsToHome;
        if(walkedsteps>=targetSteps){
            std::cout<<"Goal reached! Good job!"<<std::endl;
        }
        else{
            cout<<targetSteps-walkedsteps<<" more steps to reach goal."<<std::endl;
        }
    }
}
