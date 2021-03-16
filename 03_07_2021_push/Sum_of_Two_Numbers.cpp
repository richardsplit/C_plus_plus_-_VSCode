#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {

int beginning,end,magic_num;
cin>>beginning>>end>>magic_num;
int sum_counter=0;
int m_1,m__2;
bool target_Reached=false;
 for(int m=beginning;m<=end;m++){
     for(int m_2=beginning ; m_2 <= end; m_2++){
        m_1=m; 
        m__2=m_2;
        sum_counter++;
        if(m + m_2 == magic_num){
            
             std::cout<<"Combination N:"<<sum_counter<<" ("<<m_1<<" + "<<m_2<<" = "<<m_1+m_2<<")"<<std::endl;
            target_Reached=true;
            break;
                
         }
     }
     
     if(target_Reached){
         break;
     }
 }
    if( m_1+ m__2 != magic_num)
     {
 
    std::cout<<sum_counter<<" combinations - neither equals "<<magic_num<<std::endl;
  
     }
    return 0;
}
