//06.EXAPM PROGRAM ###### NOT FINISHED AND NOT SENT 
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
int count_locations;
cin>>count_locations;

double count_digged_gold;
double avg_expected_digged_gold;
double avg_digged_gold;
 
    for (int i=0;i<=count_locations;i++)
    {
    cin>>avg_expected_digged_gold;

    int count_days_digging;
    cin>>count_days_digging;
        
        for(int j=0;j<=count_days_digging;j++){
            double digged_gold;
            cin>>digged_gold

            count_digged_gold+=digged_gold;
        }

avg_digged_gold=count_digged_gold/count_days_digging;
    }


if(avg_digged_gold>avg_expected_digged_gold){
    std::cout<<"Good job! Average gold per day:"<<avg_digged_gold<<std::endl;
     std::cout<<"You need:"<<avg_digged_gold-avg_expected_digged_gold<<std::endl;
	 
}else{
    std::cout<<"You need:"<<avg_expected_digged_gold-avg_digged_gold<<std::endl;
}

}
