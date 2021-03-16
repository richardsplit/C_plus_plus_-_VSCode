#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {

int startNumber,endNumber;
cin>>startNumber>>endNumber;
for (int number = startNumber; number <= endNumber; number++)
{
    int firstDigit=number/100000;
    int secondDigit=number/10000%10;
    int thirdDigit=number/1000%10;
    int fourthDigit=number/100%10;
    int fifthDigit=number / 10 %10;
    int sixthDigit=number%10;
    int sumEven=secondDigit+fourthDigit+sixthDigit ;
    int sumOdd=firstDigit+thirdDigit+fifthDigit;
    if(sumEven == sumOdd)
    {
        std::cout<<number<<" ";
    }
}

    return 0;
}
