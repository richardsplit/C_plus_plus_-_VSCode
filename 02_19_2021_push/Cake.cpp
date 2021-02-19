#include<iostream>
#include <cmath>
//#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
#include<string>
//#include <memory>
//#include <sstream>
using namespace std;
//using std::cout;
//using std::endl;
//smart pointer is a wrapper around a pointer //dont have to call new and delete 



int main (){ 
int width,lenght;
cin>>width>>lenght;
int countpieces=width*lenght;
string command;
cin>>command;


    while(command != "STOP"){
        int takenPieces=std::stoi(command);
        countpieces-=takenPieces;
        if(countpieces < 0){
            std::cout<<"No more cake left! "<<"You need "<< abs(countpieces)<<" pieces more."<<std::endl;
            break;
        } 
        cin>>command;
    }
    if (command == "STOP")
    {
        std::cout<<countpieces<<" pieces are left."<<std::endl;
    }
}
