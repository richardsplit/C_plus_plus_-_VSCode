#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
int n;
cin>>n;
    for(int number=1111;number<9999;number++){
        int thousands =number/1000;
        int hundreds =number/100%10;//za da vzema predposlednoto/stoticata
        int tens=number/10%10;//za da vzema predposlednoto/deseticata
        int units =number%10;//ako razdelim edno chislo na 10 ,poluchavame poslednata cifra
    
        bool check1=thousands !=0 && n % thousands ==0;
        bool check2=hundreds !=0 && n % hundreds ==0;
        bool check3=tens !=0 && n % tens==0 ;
        bool check4=units !=0 && n%units==0 ;
        if(check1 && check2 && check3 && check4){
        std::cout<<number <<" ";
        }
    }
    return 0;
}
