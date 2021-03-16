#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
string movie;
getline(cin,movie);

int total=0,student =0 ,standard=0,kid=0;
std::cout.setf(ios::fixed);
std::cout.precision(2);
while (movie !="Finish")
    {
        string seatsasString;
        getline(cin,seatsasString);
        int seats = stoi(seatsasString);

        string ticket;
        getline(cin,ticket);
        int seatTaken=0;

        while(ticket != "End")
        {
            total++;
                seatTaken++;
                if(ticket =="student")
                {
                student++;
                }
               else if(ticket =="standard")
                {
                standard++;
                }
               else if(ticket =="kid")
                {
                kid++;
                }

            if(seatTaken>=seats){
                break;
            }

                getline(cin, ticket);
        }
        double percents =(seatTaken *1.00)/ seats *100;
        std::cout<<movie<<" - "<<percents<<"% full."<<std::endl;
        getline(cin,movie);
    }
    double students_percents =(student*1.00)/total *100;
    double standard_percents =(standard*1.00)/total *100;
    double kids_percents =(kid*1.00)/total *100;
    std::cout<<"Total tickets: "<<total<<std::endl
    <<students_percents<<"% student tickets."<<std::endl
    <<standard_percents<<"% standard tickets."<<std::endl
    <<kids_percents<<"% kids tickets."<<std::endl;
    return 0;
}
