//Fitness 04 https://judge.softuni.bg/Contests/Practice/Index/1538#9
#include <iostream>
#include <string>
//#include <math.h>
using namespace std;

int main(){
int countVisitors;
cin>>countVisitors;
cin.ignore();
int countBack =0 ,countChest =0 ,countLegs=0,countAbs=0,countShake=0,countBar=0;
int countTrain=0;
int countBuy=0;
for(int visitor=1;visitor<=countVisitors;visitor++){
    string action;
    getline(cin,action);
    if(action=="Back"){
        countBack++;
        countTrain++;
    } else if(action=="Chest"){
        countChest++;
        countTrain++;
    }  else if(action=="Legs"){
        countLegs++;
        countTrain++;
    }else if(action=="Abs"){
        countAbs++;
        countTrain++;
    }else if(action=="Protein shake"){
        countShake++;
    }else if(action=="Protein bar"){
        countBar++;
    }
}

cout<<countBack<<" - back"<<std::endl;
cout<<countChest<<" - chest"<<std::endl;
cout<<countLegs<<" - legs"<<std::endl;
cout<<countAbs<<" - abs"<<std::endl;
cout<<countShake<<" - protein shake"<<std::endl;
cout<<countBar<<" - protein bar"<<std::endl;

double percentTrain = countTrain *1.0/countVisitors*100;
cout<<percentTrain<<"% - work out"<<endl;

double percentBuy =countBuy*1.0/countVisitors*100;
cout<<percentTrain<<"% -protein"<<endl;
}