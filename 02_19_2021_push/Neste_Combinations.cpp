#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
 
 int n;
 cin>>n;
int sum_counter=0;
 for(int m=0;m<=n;m++){
     for(int m_2=0;m_2<=n;m_2++){
         for(int m_3=0;m_3<=n;m_3++){
             if(m+m_2+m_3 ==n){
                 sum_counter++;
             }
         }
     }
 }
 std::cout<<sum_counter<<std::endl;
    return 0;
}
