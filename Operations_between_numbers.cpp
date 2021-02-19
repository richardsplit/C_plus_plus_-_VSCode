<<<<<<< HEAD
#include<iostream>
//#include<<sum<math.h>
//#include<<sum<vector>
//#include<<sum<string>
#include<string>
using namespace std;

//using std::cout;
//using std::endl;


int main (){ 

int n1,n2;
char op;
cin>>n1>>n2>>op;

int sum,result,product;
switch(op)
{
  case '+':
  sum =n1+n2;
  if(sum%2==0){
     std::cout<<n1<<" + "<<n2<<" = "<<sum<<" - even"; 
  }else{
      std::cout<<n1<<" + "<<n2<<" = "<<sum<<" - odd";
  }
  break;
  
  case '-':
 sum=n1 - n2;
  if(sum%2==0){
     std::cout<<n1<<" - "<<n2<<" = "<<sum<<" - even"; 
  }else{
      std::cout<<n1<<" - "<<n2<<" = "<<sum<<" - odd";
  }

  break;
  
  case '*':
 product=n1 * n2;
  if(product %2==0){
     std::cout<<n1<<" * "<<n2<<" = "<<product<<" - even"<<endl; 
  }else{
      std::cout<<n1<<" * "<<n2<<" = "<<product<<" - odd"<<endl;
  }

  break;
  
  case '/':
  if(n2==0){
      std::cout<<" Cannot divide " << n1 <<" by zero";
  
  }else{
     double division= n1*1.0 /n2 ;
     cout.setf(ios::fixed);
     cout.precision(2);
      std::cout<<n1<<" / "<<n2<<" = "<<division;
  }
  break;

  case '%':

 if(n2==0){
      std::cout<<" Cannot divide " << n1 <<" by zero";
  
  }else{
     int  leftover = n1 % n2 ;
     cout.setf(ios::fixed);
     cout.precision(2);
      std::cout<<n1<<" % "<<n2<<" = "<<leftover;
 }
  break;
}
return 0;
  
}
=======
#include<iostream>
//#include<<sum<math.h>
//#include<<sum<vector>
//#include<<sum<string>
#include<string>
using namespace std;

//using std::cout;
//using std::endl;


int main (){ 

int n1,n2;
char op;
cin>>n1>>n2>>op;

int sum,result,product;
switch(op)
{
  case '+':
  sum =n1+n2;
  if(sum%2==0){
     std::cout<<n1<<" + "<<n2<<" = "<<sum<<" - even"; 
  }else{
      std::cout<<n1<<" + "<<n2<<" = "<<sum<<" - odd";
  }
  break;
  
  case '-':
 sum=n1 - n2;
  if(sum%2==0){
     std::cout<<n1<<" - "<<n2<<" = "<<sum<<" - even"; 
  }else{
      std::cout<<n1<<" - "<<n2<<" = "<<sum<<" - odd";
  }

  break;
  
  case '*':
 product=n1 * n2;
  if(product %2==0){
     std::cout<<n1<<" * "<<n2<<" = "<<product<<" - even"<<endl; 
  }else{
      std::cout<<n1<<" * "<<n2<<" = "<<product<<" - odd"<<endl;
  }

  break;
  
  case '/':
  if(n2==0){
      std::cout<<" Cannot divide " << n1 <<" by zero";
  
  }else{
     double division= n1*1.0 /n2 ;
     cout.setf(ios::fixed);
     cout.precision(2);
      std::cout<<n1<<" / "<<n2<<" = "<<division;
  }
  break;

  case '%':

 if(n2==0){
      std::cout<<" Cannot divide " << n1 <<" by zero";
  
  }else{
     int  leftover = n1 % n2 ;
     cout.setf(ios::fixed);
     cout.precision(2);
      std::cout<<n1<<" % "<<n2<<" = "<<leftover;
 }
  break;
}
return 0;
  
}
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
