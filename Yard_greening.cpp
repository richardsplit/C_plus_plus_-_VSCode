#include <iostream>
//#include <vector>
//#include <string>
using namespace std;
#include <iomanip>
//using std::cout;
//using std::endl;

void zoo_shop(){

int plosht;
cin>>plosht;

double discount=0.18;
double cena_kv_metur=7.61;

double plosht_bez=plosht*cena_kv_metur;
double plosht_sus= discount*plosht_bez;


double final=plosht_bez-plosht_sus;


std::cout<<"The final price is: "<<fixed<<setprecision(2)<<final<<" lv."<<"\n";
std::cout<<"The discount is: "<<fixed<<setprecision(2)<<plosht_sus<<" lv."<<"\n";


//fail in 3 test cases; 

}



int main (){


zoo_shop();
return 0;
}
