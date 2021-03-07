//05.EXAM PROGRAM Puppy Care 

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

int food_kg;
cin>>food_kg;

cin.ignore();

int sum_food_gr=food_kg*1000;

int food_eaten=0;

string command;
 getline(cin,command);


while(command!="Adopted"){

  int food_kg=stoi(command);
     food_eaten+=food_kg;
        
  

    getline(cin,command);
 

}



//cout<<food_eaten<<endl;
//cout<<sum_food_gr<<endl;
double enough_food=sum_food_gr-food_eaten;
double not_enough=food_eaten-sum_food_gr;

if(sum_food_gr>=food_eaten){

    std::cout<<"Food is enough! Leftovers: "<<enough_food<<" grams."<<std::endl;
}
else 
{
    std::cout<<"Food is not enough. You need "<<not_enough<<" grams more."<<std::endl;
}

}
