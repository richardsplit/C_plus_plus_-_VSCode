#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;


int getNumHumans();

int getNumSkelletons();

void PrintResults(int numhumans,int numskelletons,int startHumans,int startSkeletons);

void simulate_Battle(int &numhumans,int &numskelletons);

int main()
{

    int startSkeletons;
    int startHumans;
    int numskelletons ;
    int numhumans ;

    std::cout<<"\n*** Depression Vs Humans! ****\n\n\n";

    numhumans = getNumHumans();
    startHumans=numhumans;

    

  

   numskelletons=getNumSkelletons();
    startSkeletons =numskelletons;

    cout<<"\nBeginning combat!\n\n";


    simulate_Battle(numhumans,numskelletons);

     PrintResults(numhumans,numskelletons,startHumans,startSkeletons);

          int finalHumans_count=startHumans-numhumans;    
          int finalSkeletons_count=startSkeletons-numskelletons;
            cout<<finalHumans_count<<" humans and "<<finalSkeletons_count<<" depression lost their lives.\n\n";

         system("PAUSE");
         return 0;   
}

int getNumHumans()
{
    int numhumans;
    std::cout<<"Enter the number of humans : ";

    cin>>numhumans;
    return numhumans;
}


int getNumSkelletons()
{
    int numskelletons;
    std::cout<<"Enter the number of skeletons : ";

    cin>>numskelletons;
    return numskelletons;
}

void PrintResults(int numhumans,int numskelletons,int startHumans,int startSkeletons)
{

     cout<<"\nBattle is over!\n\n";

      if(numhumans>0){
        cout<<"Humans won \n";
        cout<<"There are "<<numhumans <<" humans left ";
    }else {
        cout<<"Depression  won \n";
        cout<<"There is "<<numskelletons <<" depression left ";
    }

}

void simulate_Battle(int &numhumans,int &numskelletons)
{


   static  default_random_engine randomGenerator(time(NULL));
    uniform_real_distribution<float> attack (0.0f,1.0f);


      //human properties;
    float humanAttack=0.6f;
    float humanHealth=250.0f;
    float humanDamage=200.0f;

       float currentHumanHealth =humanHealth;

    //skeleton properties;
    float skeletonAttack=0.2f;
    float skeletonHealth=50.0f;
    float skeletonDamage=40.0f;
    float currentskeletonHealth=skeletonHealth;

       float attackResult;


    //turn for the battle;
    char turn='H';

    while((numhumans>0) &&  (numskelletons > 0))
    {
           //Get our attack result
        attackResult = attack(randomGenerator);

        //Human turn
        if(turn=='H')
            {
             

                //Check if attack was successfull
                if(attackResult<=humanAttack){
                    currentskeletonHealth -=humanDamage;

                if(currentskeletonHealth<0){
                   numskelletons--; 
                   currentskeletonHealth =skeletonHealth;
                    }
                }
                
            turn='S';

            }else{

                
                if(attackResult<=skeletonAttack){
                    currentHumanHealth -=skeletonDamage;

                    if(currentHumanHealth<0){
                        numhumans--;
                        currentHumanHealth = humanHealth;
                    }
                }
                turn ='H';
            }
    }
}