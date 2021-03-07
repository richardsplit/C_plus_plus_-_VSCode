//04.EXAM PROGRAM GIFTS FROM SANTA
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

    int n,m,s;
    cin>>n>>m>>s;

    bool isBreak=false;
    for (int i=m;i>=n;i--){
            if(i%3==0 && i%2==0)
            {
                if(i==s)
                {
                    break;
                }
                std::cout<<i<<" ";

            }
    }

}
