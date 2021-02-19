#include<iostream>
//#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
//#include<string>
//#include <memory>
//#include <sstream>
using namespace std;

//using std::cout;
//using std::endl;

//smart pointer is a wrapper around a pointer //dont have to call new and delete 




int main (){ 

string name;
cin>>name;

int grade=1;

double final_grade=0.00;
while(grade<=12){
    double current_grade;
    cin>>current_grade;

    if(current_grade>=4.00){
        final_grade+=current_grade;
        grade++;
    }

}


std::cout.setf(ios::fixed);
std::cout.precision(2);
std::cout<<name<<" graduated. Average grade: "<<final_grade/12.00<<std::endl;
}
