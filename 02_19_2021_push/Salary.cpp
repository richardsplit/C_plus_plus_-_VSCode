#include<iostream>
//#include <cmath>
//#include<vector>
//#include<<sum<string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 

   //vzimame chislo
    //za vsqko edno chislo 
    //proverka na grupata
    //ako otg na uslovie na opredelena grupa 
    

    int countTabs,salary;
   cin>>countTabs>>salary;
   
  for(int tab=1;tab<=countTabs;tab++){
    string tabName;
    cin>>tabName;
    if(tabName=="Facebook"){
      salary -=150;
    }else if(tabName=="Instagram"){
      salary-=100;
    }
    else if(tabName=="Reddit"){
      salary -=50;
    }
    if (salary<=0){
    std::cout<<"You have lost your salary." <<endl; 
    break;
    }
  }
    if(salary>0){
    std::cout<<salary<<std::endl;
    }
return 0;
  
}
