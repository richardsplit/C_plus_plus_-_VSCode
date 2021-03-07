#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
string command;
getline(cin,command);

int sumPrime=0;
int sumNoPrime=0;
while(command != "stop")
{
    int number=stoi(command);
    if(number<0){
        std::cout<<"Number is negative."<<std::endl;
    }
    else{
       
        int count=0;
        for(int i =1;i<=number;i++)
        {
            if(number% i ==0)
            {
                count++;
            }
        }
            if(count == 2)
            {
                sumPrime+=number;
            }else
            {
                sumNoPrime+=number;
            }
    }
    cin>>command;     
}
std::cout<<"Sum of all prime numbers is: " <<sumPrime<<std::endl;
std::cout<<"Sum of all non prime numbers is: " <<sumNoPrime<<std::endl;
    return 0;
}
