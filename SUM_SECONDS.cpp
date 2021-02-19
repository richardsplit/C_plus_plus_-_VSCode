<<<<<<< HEAD
#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

     

int main (){

 int t_first,t_second,t_third;
cin>>t_first>>t_second>>t_third;
 int sum_score=t_first+t_second+t_third;

int minutes=sum_score/60;
int seconds=sum_score%60;

if(seconds<10){
    std::cout<<minutes<<":0"<<seconds;
}
else{
    std::cout<<minutes<<":"<<seconds<<"\n";
}

        return 0;

    }



=======
#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

     

int main (){

 int t_first,t_second,t_third;
cin>>t_first>>t_second>>t_third;
 int sum_score=t_first+t_second+t_third;

int minutes=sum_score/60;
int seconds=sum_score%60;

if(seconds<10){
    std::cout<<minutes<<":0"<<seconds;
}
else{
    std::cout<<minutes<<":"<<seconds<<"\n";
}

        return 0;

    }



>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
