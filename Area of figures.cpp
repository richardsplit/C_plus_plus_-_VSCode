<<<<<<< HEAD
#include <iostream>
#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

        
    //void print_array();
     
    


int main (){
string figuretype;
cin>>figuretype;
double pi =3.14159265359;
double area=0.0;
if(figuretype=="square")
    {
    double a;
    cin>>a;
    area=a*a;
    }
else if(figuretype=="rectangle")
    {
        double a,b;
        cin>>a>>b;
        area=a*b;
       // std::cout<<"Welcome"<<"\n";
    }
else if(figuretype=="circle")
    {
        double r;
        cin>>r;
        area=r*r*pi;
        //std::cout<<"Wrong password!"<<"\n";
    }
else if(figuretype=="triangle")
    {
        double a,h;
        cin>>a>>h;
        area=(a*h)/2;
    }   
else{
    std::cout<<"Please choose existing form";
}
    cout.setf(ios::fixed);
    cout.precision(3);
    cout<<area<<endl;

return 0;
}
=======
#include <iostream>
#include <cmath>
//#include <vector>
//#include <string>
using namespace std;
//#include <iomanip>
//using std::cout;
//using std::endl;

        
    //void print_array();
     
    


int main (){
string figuretype;
cin>>figuretype;
double pi =3.14159265359;
double area=0.0;
if(figuretype=="square")
    {
    double a;
    cin>>a;
    area=a*a;
    }
else if(figuretype=="rectangle")
    {
        double a,b;
        cin>>a>>b;
        area=a*b;
       // std::cout<<"Welcome"<<"\n";
    }
else if(figuretype=="circle")
    {
        double r;
        cin>>r;
        area=r*r*pi;
        //std::cout<<"Wrong password!"<<"\n";
    }
else if(figuretype=="triangle")
    {
        double a,h;
        cin>>a>>h;
        area=(a*h)/2;
    }   
else{
    std::cout<<"Please choose existing form";
}
    cout.setf(ios::fixed);
    cout.precision(3);
    cout<<area<<endl;

return 0;
}
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
