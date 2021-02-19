1. #include <iostream>
2. //#include <math.h>
3. //#include <vector>
4. //#include <string>
5. using namespace std;
6. //using std::cout;
7. //using std::endl;
8.  
9.  
10. int main (){
11.  
12.  
13.  
14.  
15. string city;
16. double sales;
17. cin>>city>>sales;
18.  
19.  
20. //string output;
21.  
22.  
23. if(city =="Sofia" ){
24.     if(sales>0 && sales <=500){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.05<<endl;}
25.      else if(sales>500 && sales <=1000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.07<<endl;}
26.     else if(sales>1000 && sales <=10000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.08<<endl;}
27.     else if(sales>10000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.12<<endl;}
28.     else{std::cout<<"error";}
29. } 
30. else if(city=="Varna"){
31.  if(sales>0 && sales <=500){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.045<<endl;}
32.      else if(sales>500 && sales <=1000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.075<<endl;}
33.     else if(sales>1000 && sales <=10000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.10<<endl;}
34.     else if(sales>10000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.13<<endl;}
35.     else{std::cout<<"error";}
36. } 
37. else if(city=="Plovdiv"){
38.      if(sales>0 && sales <=500){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.055<<endl;}
39.      else if(sales>500 && sales <=1000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.08<<endl;}
40.     else if(sales>1000 && sales <=10000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.12<<endl;}
41.     else if(sales>10000){std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<sales*0.145<<endl;}
42.     else{std::cout<<"error";}
43. } 
44.  
45. else{std::cout<<"error";}
46. return 0;
47.     }

From <https://pastebin.com/b6XfKzXy> 
