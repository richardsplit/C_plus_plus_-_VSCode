<<<<<<< HEAD
#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
#include <iomanip>
//using std::cout;
//using std::endl;



int main (){

int num_pages;
cin>> num_pages;
int pages_per_hour;
cin>>pages_per_hour;
int days;
cin>>days;



int sum_reading_book=num_pages/pages_per_hour;
int req_hours=sum_reading_book/days;
std::cout<<req_hours<<"\n";
//<<fixed<<setprecision(2)
return 0;
}
=======
#include <iostream>
#include <math.h>
//#include <vector>
//#include <string>
using namespace std;
#include <iomanip>
//using std::cout;
//using std::endl;



int main (){

int num_pages;
cin>> num_pages;
int pages_per_hour;
cin>>pages_per_hour;
int days;
cin>>days;



int sum_reading_book=num_pages/pages_per_hour;
int req_hours=sum_reading_book/days;
std::cout<<req_hours<<"\n";
//<<fixed<<setprecision(2)
return 0;
}
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
