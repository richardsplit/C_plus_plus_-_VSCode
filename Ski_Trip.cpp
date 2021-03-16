<<<<<<< HEAD
#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 




string  days_stay, value,room;
getline(cin, days_stay); 
getline(cin, room); 
getline(cin, value); 
int days = stoi(days_stay);
//string output;
double night_stay=days-1;
double prc_room=18.00;
double prc_app=25.00;
double prc_pres_app=35.00;
double calc_stay=0.0;
if(days < 10)
{
            if(room == "room for one person")
            {
                calc_stay=night_stay*prc_room;
                if(value== "positive")
                
                {   
                    calc_stay*=1.25;
                    std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                else if(value=="negative")
                {
                    calc_stay*=0.90;
                    std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
            
            }

            else if(room == "apartment" )
            {
                    calc_stay=night_stay*prc_app;
                    calc_stay=calc_stay*0.70;
                    if(value=="positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                    else
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
            
            }
                
            else if(room == "president apartment")
        {
            calc_stay=night_stay*prc_pres_app;
            calc_stay=calc_stay*0.90;
            if(value== "positive")
            {
                calc_stay*=1.25;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
            else if(value== "negative")
            {
                calc_stay*=0.90;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
        
        }
        
}
else if(days>10 && days<=15)
{
            if(room == "room for one person")
                {
                    calc_stay=night_stay*prc_room;
                    if(value== "positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                    else if(value== "negative")
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                
                }

                else if(room == "apartment" )
                {
                        calc_stay=night_stay*prc_app;
                        calc_stay=calc_stay*0.65;
                        if(value== "positive")
                        {
                            calc_stay*=1.25;
                            std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                         else if(value== "negative")
                        {
                            calc_stay*=0.90;
                            std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                
                }
                        
                else if(room == "president apartment")
                {
                    calc_stay=night_stay*prc_pres_app;
                    calc_stay=calc_stay*0.85;
                    if(value== "positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                     else if(value== "negative")
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                }
        
}
else if(days>15)
{
     if(room == "room for one person")
        {
            calc_stay=night_stay*prc_room;
            if(value=="positive")
            {std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay*1.25<<endl;}
             else if(value=="negative")
            {std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay*0.90<<endl;}
        }

        else if(room == "apartment" )
        {
                    calc_stay=night_stay*prc_app;
                    calc_stay=calc_stay*0.50;
                    if(value=="positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                     else if(value=="negative")
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                
        
        }
                        
        else if(room == "president apartment")
        {
            calc_stay=night_stay*prc_pres_app;
            calc_stay=calc_stay*0.80;
            if(value=="positive")
            {
                calc_stay*=1.25;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
             else if(value=="negative")
            {
                calc_stay*=0.90;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
        }
} 
else{std::cout<<"error";}

return 0;
    }
=======
#include <iostream>
//#include <math.h>
//#include <vector>
//#include <string>
#include<string>
using namespace std;
//using std::cout;
//using std::endl;

int main (){ 




string  days_stay, value,room;
getline(cin, days_stay); 
getline(cin, room); 
getline(cin, value); 
int days = stoi(days_stay);
//string output;
double night_stay=days-1;
double prc_room=18.00;
double prc_app=25.00;
double prc_pres_app=35.00;
double calc_stay=0.0;
if(days < 10)
{
            if(room == "room for one person")
            {
                calc_stay=night_stay*prc_room;
                if(value== "positive")
                
                {   
                    calc_stay*=1.25;
                    std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                else if(value=="negative")
                {
                    calc_stay*=0.90;
                    std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
            
            }

            else if(room == "apartment" )
            {
                    calc_stay=night_stay*prc_app;
                    calc_stay=calc_stay*0.70;
                    if(value=="positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                    else
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
            
            }
                
            else if(room == "president apartment")
        {
            calc_stay=night_stay*prc_pres_app;
            calc_stay=calc_stay*0.90;
            if(value== "positive")
            {
                calc_stay*=1.25;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
            else if(value== "negative")
            {
                calc_stay*=0.90;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
        
        }
        
}
else if(days>10 && days<=15)
{
            if(room == "room for one person")
                {
                    calc_stay=night_stay*prc_room;
                    if(value== "positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                    else if(value== "negative")
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                
                }

                else if(room == "apartment" )
                {
                        calc_stay=night_stay*prc_app;
                        calc_stay=calc_stay*0.65;
                        if(value== "positive")
                        {
                            calc_stay*=1.25;
                            std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                         else if(value== "negative")
                        {
                            calc_stay*=0.90;
                            std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                
                }
                        
                else if(room == "president apartment")
                {
                    calc_stay=night_stay*prc_pres_app;
                    calc_stay=calc_stay*0.85;
                    if(value== "positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                     else if(value== "negative")
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                }
        
}
else if(days>15)
{
     if(room == "room for one person")
        {
            calc_stay=night_stay*prc_room;
            if(value=="positive")
            {std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay*1.25<<endl;}
             else if(value=="negative")
            {std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay*0.90<<endl;}
        }

        else if(room == "apartment" )
        {
                    calc_stay=night_stay*prc_app;
                    calc_stay=calc_stay*0.50;
                    if(value=="positive")
                    {
                        calc_stay*=1.25;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                     else if(value=="negative")
                    {
                        calc_stay*=0.90;
                        std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
                
        
        }
                        
        else if(room == "president apartment")
        {
            calc_stay=night_stay*prc_pres_app;
            calc_stay=calc_stay*0.80;
            if(value=="positive")
            {
                calc_stay*=1.25;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
             else if(value=="negative")
            {
                calc_stay*=0.90;
                std::cout.setf(ios::fixed); std::cout.precision(2); std::cout<<calc_stay<<endl;}
        }
} 
else{std::cout<<"error";}

return 0;
    }
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
