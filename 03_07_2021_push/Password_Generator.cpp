#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {

int n,l;
cin>>n>>l;
for (int  first = 1; first <= n; first++)//1viq element of parolata
{
    for (int second = 1; second <= n; second++)//2riq element of parolata
    {
        for (char third = 'a'; third <'a'+l; third++)//3tiq element of parolata
        {
            for (char fourth = 'a'; fourth <'a'+l; fourth++)//4tiq element of parolata
            {
               for (int fifth = 1; fifth <=n; fifth++)//5tiq element of parolata
               {
                   if(fifth>first && fifth>second){
                       std::cout<<first<<second<<third<<fourth<<fifth<<" ";
                   }
               }
               
            }
            
        }
        
    }
    
}


    return 0;
}
