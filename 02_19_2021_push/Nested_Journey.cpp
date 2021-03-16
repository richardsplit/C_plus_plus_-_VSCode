#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
string destination;
getline(cin,destination);
//cin.ignore();

    while (destination != "End"){
       string CostAsString;
       getline(cin,CostAsString);
        int required_budget =stoi(CostAsString);
        
       // int saved_money;
       // cin>>saved_money;
    while(required_budget>0){
           string savings;
           getline(cin,savings);
      
        required_budget -= stoi(savings);
    }
std::cout<<"Going to " <<destination<<"!"<<std::endl;
// 
// 
        getline(cin,destination);
    }


    return 0;
}
