#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

int current=0;
bool isBigger=false;

    for(int rows=1;rows<=n;rows++){
        for(int cols=1;cols<=rows;cols++){
                         current++;
                        if(current>n){
                            isBigger=true;
                            break;
                        }
                        std::cout<<current<<" ";
                       
        }
        if(isBigger){
            break;
        }
        std::cout<<endl;
    }

}
