#include<iostream>
//#include <cmath>
//#include<vector>
//#include<<sum<string>
//#include<string>
using namespace std;
//using std::cout;
//using std::endl;
    

int main (){ 

   //vzimame chislo
    //za vsqko edno chislo 
    //proverka na grupata
    //ako otg na uslovie na opredelena grupa 
    
    int n;//broi na chislata
    cin>>n;
    int countFirst=0, countSecond=0,countThird=0,countFourth=0,countFifth=0;
    for(int number=1;number <=n;number++)
    {
      int value;
      cin>>value;
      if(value<200){
        //purva grupa
        countFirst++;
      }
        else if(value>=200 && value<=399)
        {
          //vtora grupa
          countSecond++;
        }
        else if(value>=400 && value<=599)
        {
          //treta grupa
          countThird++;
        }else if(value>=600 && value<=799)
        {
          //4ta grupa
          countFourth++;
        }
        else if(value>=800){
          countFifth++;
        }
    }
    double p1=countFirst*1.0 /n*100;
    double p2=countSecond*1.0 /n*100;
    double p3=countThird*1.0 /n*100;
    double p4=countFourth*1.0 /n*100;
    double p5=countFifth*1.0 /n*100;
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<p1<<"%"<<endl;
    std::cout<<p2<<"%"<<endl;
    std::cout<<p3<<"%"<<endl;
    std::cout<<p4<<"%"<<endl;
    std::cout<<p5<<"%"<<endl;
return 0;
  
}
