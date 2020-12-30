#include <iostream>

void main() 
{

double earth_weight;
int planet;
double weight;

std::cout<<"Enter your earth weight in kg : " ;
std::cin>>earth_weight ;

std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";

std:: cout << "Which planet are you visiting ? : ";
std:: cin >>planet;

 if (planet == 1) {
 
    weight = earth_weight * 0.78;
 
  } 
  else if (planet == 2) {
 
    weight = earth_weight * 0.38;
 
  } 
  else if (planet == 3) {

    weight = earth_weight * 2.34;
  }
  else if (planet == 4) {

    weight = earth_weight * 1.06;
  }
   else if (planet == 5) {

    weight = earth_weight * 	0.92;
  }
 else if (planet == 6) {

    weight = earth_weight * 	1.19;
  }
  

switch (planet)
  {
    case 1: 
      std::cout << "Your weight on  Venus will be : " <<weight <<"\n";
      break;
    case 2:
      std::cout <<"Your weight on   Mars  will be : "<<weight<<"\n";
      break;

   case 3:
    std::cout <<"Your weight on   Jupiter  will be : "<<weight<<"\n";
  
   case 4:
    std::cout <<"Your weight on   Saturn   will be : "<<weight<<"\n";
    break;
  case 5:
    std::cout <<"Your weight on  Uranus   will be : "<<weight<<"\n";
    break;
     case 6:
    std::cout <<"Your weight on  Neptune   will be : "<<weight<<"\n";
    break;


  }




}