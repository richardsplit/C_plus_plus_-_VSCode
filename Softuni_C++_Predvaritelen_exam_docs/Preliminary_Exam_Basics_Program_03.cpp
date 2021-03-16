//03 EXAM PROGRAM FOOTBALL SOUVENIRS
	

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
 string team,souvenier;
cin>>team>>souvenier;

int count_souvenier;
cin>>count_souvenier;

double flags,caps,posters,stickers;

double sum;

    if(team=="Argentina")
    {
        flags=3.25;
        caps=7.20;
        posters=5.10;
        stickers=1.25;
    }
    else if(team=="Brazil")
    {
        flags=4.20;
        caps=8.50;
        posters=5.35;
        stickers=1.20;

    }
    else if(team=="Croatia")
    {

        flags=2.75;
        caps=6.90;
        posters=4.95;
        stickers=1.10;
    }
    else if(team=="Denmark")
    {
        flags=3.10;
       caps=6.50;
        posters=4.80;
        stickers=0.90;
    }
     


    if(souvenier=="flags")
    {
         sum=count_souvenier*flags;
    }
    else if(souvenier=="caps")
    {
         sum=count_souvenier*caps;
    }
     else if(souvenier=="posters")
     {
         sum=count_souvenier*posters;
     }
     else if(souvenier=="stickers")
     {
        sum=count_souvenier*stickers;
     }
     
    if(team!="Argentina" && team != "Brazil" && team !="Croatia" && team !="Denmark" )
    {
        std::cout<<"Invalid country!"<<std::endl;
    }
    else if(souvenier!="flags"  && souvenier !="caps" && souvenier !="posters" && souvenier !="stickers" )
     {
         std::cout<<"Invalid stock!"<<std::endl;   
     }
    else
    {
      cout.setf(ios::fixed);
     cout.precision(2);
    std::cout<<"Pepi bought "<<count_souvenier<<" "<<souvenier<<" of "<<team<<" for "<<sum<<" lv."<<std::endl;
    }
}
