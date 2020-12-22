#include <iostream>
using std::cout;
using std::endl;
using std::cin;//console in

int main () //main function 


{
    int slices; //declaration initilization
    cout <<"Enter how many slices :";
    cin >>slices;
    std::cout <<"You have "<< slices  << " slices of pizza" << endl;
    int children =slices + 1;
    cout <<"Children have "<< children <<" slices off pizza" <<endl;  
}
