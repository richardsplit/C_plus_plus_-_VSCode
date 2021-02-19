<<<<<<< HEAD
#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){

double income,avg_grade,min_wage;
cin>>income>>avg_grade>>min_wage;
double soc_schol=0.35*min_wage;
double exc_schol=avg_grade*25;
if(income<min_wage && avg_grade>=5.5 && soc_schol>=exc_schol)
    {
        std::cout<<"You get a Social scholarship "<<floor(soc_schol)<<" BGN"<<std::endl;
    } 
else if (avg_grade>=5.5 && income<min_wage &&soc_schol<exc_schol)
    {
        std::cout<<"You get a scholarship for excellent results "<<floor(exc_schol)<<" BGN"<<std::endl;    
    }
else if(avg_grade>4.5 && income<min_wage ) 
    {
        std::cout<<"You get a Social scholarship "<<floor(soc_schol)<<" BGN"<<std::endl;
    }
else if(avg_grade>=5.5)
    {
        std::cout<<"You get a scholarship for excellent results "<<floor(exc_schol)<<" BGN"<<std::endl;
    }
else
    {     
        std::cout<<"You cannot get a scholarship!"<<std::endl;
    }                                                                       
return 0;
    }
=======
#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;
     
int main (){

double income,avg_grade,min_wage;
cin>>income>>avg_grade>>min_wage;
double soc_schol=0.35*min_wage;
double exc_schol=avg_grade*25;
if(income<min_wage && avg_grade>=5.5 && soc_schol>=exc_schol)
    {
        std::cout<<"You get a Social scholarship "<<floor(soc_schol)<<" BGN"<<std::endl;
    } 
else if (avg_grade>=5.5 && income<min_wage &&soc_schol<exc_schol)
    {
        std::cout<<"You get a scholarship for excellent results "<<floor(exc_schol)<<" BGN"<<std::endl;    
    }
else if(avg_grade>4.5 && income<min_wage ) 
    {
        std::cout<<"You get a Social scholarship "<<floor(soc_schol)<<" BGN"<<std::endl;
    }
else if(avg_grade>=5.5)
    {
        std::cout<<"You get a scholarship for excellent results "<<floor(exc_schol)<<" BGN"<<std::endl;
    }
else
    {     
        std::cout<<"You cannot get a scholarship!"<<std::endl;
    }                                                                       
return 0;
    }
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
