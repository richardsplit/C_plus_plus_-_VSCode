#include <iostream>
#include<climits>
#include<cmath>
#include<string>
#include<cstdlib>
#include<ctime>

using std::cout;
using std::endl;
using std::cin;//console in

void print_array (int array [],int count)
    {
        for (int i=0;i<count;i++)
            {
                std::cout<<"Your guesses so far : "<<array[i] <<"\t";
            }
            std::cout <<"\n";
    }
void play_game()
{


    int guesses[251];
    int guess_count=0;

    int random = rand() % 251;
    std::cout<<random <<std::endl;
    std::cout<<"Guess the number : ";
    while(true)
    {
        int guess;
        std::cin>>guess;

        guesses[guess_count++] = guess;//guess_count v sluchaq ni e 'i' -pochva ot 0 koito go uvelichavame vseki put kogato vkarame -'guess'
        //moje i guess_count; tuk ,na tozi red 
        //Ako slojim '++guess_count -purvo shte  incrementira,toest nashiq 'i' koito e guess_count shte go incrementira,i shte assigne guess-a ni na sledvashtiq indeks ='i'/guess_count      
        if(guess==random)
        {
            std::cout <<"You win!\n";
            break;
        } 
        else if ( guess < random )
        {
            std::cout<<"Your number is too low\n";
        } else 
        {
            std::cout<<"Your number is too high\n";
        }
    }

    print_array(guesses,guess_count);
}




int main ()
{

 srand(time(NULL));
    int choice ;
    do 
    {
    std::cout <<"0. Quit" << std::endl <<"1. Play Game\n";
    std::cin >>choice;

      switch(choice )
      {
            case 0:
            std::cout << "Thanks for nothing\n";
            return 0;
            
            case 1:
            play_game();
            break;

            case 2:
            std::cout<<"settings\n";
            break;
      }

    }
    while(choice!=0);
    
 
}