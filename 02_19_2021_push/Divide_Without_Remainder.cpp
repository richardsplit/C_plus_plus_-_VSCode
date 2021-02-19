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
    int countFirst=0, countSecond=0,countThird=0;
    for(int number=1;number <=n;number++)
    {
      int value;
      cin>>value;
      if(value % 2 ==0){
        //purva grupa
        countFirst++;
      }
     if(value % 3 ==0 )
        {
          //vtora grupa
          countSecond++;
        }
         if(value % 4 ==0)
        {
          //treta grupa
          countThird++;
        }
    }
    double p1=countFirst*1.0 /n*100;
    double p2=countSecond*1.0 /n*100;
    double p3=countThird*1.0 /n*100;
   
    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    std::cout<<p1<<"%"<<endl;
    std::cout<<p2<<"%"<<endl;
    std::cout<<p3<<"%"<<endl;
return 0;
  
}
