#include <iostream>
#include<cmath>
using std::cout;
using std::endl;
using std::cin;//console in


//double power (double , int) -- declation [must be at the start of our program ]

/*double power (double base, int exponent ) // definition 
    {
    return 0.0;
    }
*/

double power (double base, int exponent ) //declaring and defining  ## 'base' & 'exponent' -parameters ##  identifier 'power'
    {
     double result =1 ;

        for(int i =0;i<exponent;i++)
        {
            result=result * base;
        }
        return result;
    }


    void print_pow(double base, int exponent)
    {
   
    double mypower = power (base, exponent); // -'arguments '
    cout <<base <<"  Raised to the " << exponent <<" power is  "<< mypower<<"\n";

    }

int main () //main function 


{

double base ;
int exponent ;

  cout <<"What is the base ?: ";
    cin >> base; 
    cout <<"What is the exponent?: ";
    cin >> exponent;

    print_pow(base,exponent);
}
