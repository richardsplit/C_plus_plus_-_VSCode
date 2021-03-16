<<<<<<< HEAD

int main (){ 

int hour_exam;
int minute_exam;
int hour_arrival;
int min_arrival;

 string onT = "On time";
string  earlyT = "Early";
string lateT = "Late";
string  beforeT = " before the start";
string  afterT = " after the start";
string  min = "minutes ";
string  hours = "hours";



cin>>hour_exam>>minute_exam>>hour_arrival>>min_arrival;

int exam= (hour_exam*60)+minute_exam;
int arrival=(hour_arrival*60)+min_arrival;
int diff=exam-arrival;

int hour = abs(diff / 60);
int minutes = abs(diff % 60);



if (diff < 0)
{
    if (diff > - 60)
    {
        cout << "Late" << endl;
        cout << minutes <<min<<afterT;
    }
    else if (diff <= -60 && minutes >=10)
    {
        cout << "Late" << endl;
        cout << hour << ":" << minutes <<hours<<afterT;
    }
    else if (diff <= -60 && minutes < 10)
    {
        cout << "Late" << endl;
        cout << hour << ":0" << minutes <<hours<<afterT;
    }
}
    else if(diff == 0)
{
 std::cout<<"On time";
}
else if (diff>0)
{
    if (diff<=30){
         std::cout<<"On time"<<endl;
        std::cout<<minutes<<min<<beforeT;
        }
        else if(diff>30 && diff<60){
            cout<<"Early "<<endl;
            cout<<minutes<<min<<beforeT;
        }
        else if(diff >=60 && minutes >=10){
            std::cout<<"Early ";
            std::cout<< hour << ":" <<minutes <<hours<<beforeT;
        }
        else if(diff>=60 && minutes<10){
            std::cout << "Early " << endl;
            std::cout << hour << ":0" << minutes <<hours<<beforeT;
        }
}
return 0;
  
}
=======

int main (){ 

int hour_exam;
int minute_exam;
int hour_arrival;
int min_arrival;

 string onT = "On time";
string  earlyT = "Early";
string lateT = "Late";
string  beforeT = " before the start";
string  afterT = " after the start";
string  min = "minutes ";
string  hours = "hours";



cin>>hour_exam>>minute_exam>>hour_arrival>>min_arrival;

int exam= (hour_exam*60)+minute_exam;
int arrival=(hour_arrival*60)+min_arrival;
int diff=exam-arrival;

int hour = abs(diff / 60);
int minutes = abs(diff % 60);



if (diff < 0)
{
    if (diff > - 60)
    {
        cout << "Late" << endl;
        cout << minutes <<min<<afterT;
    }
    else if (diff <= -60 && minutes >=10)
    {
        cout << "Late" << endl;
        cout << hour << ":" << minutes <<hours<<afterT;
    }
    else if (diff <= -60 && minutes < 10)
    {
        cout << "Late" << endl;
        cout << hour << ":0" << minutes <<hours<<afterT;
    }
}
    else if(diff == 0)
{
 std::cout<<"On time";
}
else if (diff>0)
{
    if (diff<=30){
         std::cout<<"On time"<<endl;
        std::cout<<minutes<<min<<beforeT;
        }
        else if(diff>30 && diff<60){
            cout<<"Early "<<endl;
            cout<<minutes<<min<<beforeT;
        }
        else if(diff >=60 && minutes >=10){
            std::cout<<"Early ";
            std::cout<< hour << ":" <<minutes <<hours<<beforeT;
        }
        else if(diff>=60 && minutes<10){
            std::cout << "Early " << endl;
            std::cout << hour << ":0" << minutes <<hours<<beforeT;
        }
}
return 0;
  
}
>>>>>>> 5d41204a47f0eed729faa9d31104fe8d7c5443d6
