#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
int floors,rooms_per_floor;
cin>>floors>>rooms_per_floor;



for(int floor=floors;floor>0;floor--){
    char letter;
    if(floor==floors){
        letter = 'L';
     }else if(floor%2==0){
         letter ='O';
     }else{
         letter ='A';
     }
    for(int room=0;room<rooms_per_floor;room++){
    std::cout<<letter<<floor<<room<<" ";
     //
        }
    std::cout<<std::endl;
    }
    return 0;
}
