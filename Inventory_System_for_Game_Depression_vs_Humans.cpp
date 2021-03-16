#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

const int numItems=4;

int getNumHumans();

int getNumSkelletons();

void PrintResults(int numhumans,int numskelletons,int startHumans,int startSkeletons);

void simulate_Battle(int &numhumans,int &numskelletons);

const string shopItemNames[numItems]={"Boots.","Swords.","Helmets.","Wings."};

void PrintInventory(const int playerInventory[numItems]);

void PrintShop();

bool buyItems(int playerInventory[numItems]);
int main()
{

    bool statusGame=false;

    //Inventory system for shopItems
    int playerInventory[numItems]={0,0,0,1};

    cout<<" *** Welcome to the item shop! ***\n";

    while (statusGame == false)
    {
        cout<<endl;
         cout<<"What would you like to buy?\n"<<endl;

        PrintShop();
    
        PrintInventory (playerInventory);
       
         statusGame= buyItems(playerInventory);
        cout<<"\n\n\n";
        //statusGame=true;
        
    }


   

    system("PAUSE");
    return 0;
}

void PrintInventory(const int playerInventory[numItems])
{
    cout<<"Your inventory is: \n"; 
    for(int i=0;i<numItems;i++)
    {
        if(playerInventory[i]>0)
        {
            cout<<playerInventory[i]<<" x "<<shopItemNames[i]<<endl;
        }
            // if(playerInventory[i] == 0)
            // {
            //     cout<<playerInventory[i]<<" available "<<shopItemNames[i]<<endl;
            // }
    }
    cout<<endl;
}

void PrintShop()


    {

        cout<<"Shop Inventory: \n";
        cout<<"**************************"<<endl;
        for(int i =0;i<numItems;i++){
            cout<<i+1<<". "<<shopItemNames[i]<<" ";
         }


        cout<<endl<<"\n";
        cout<<"**************************\n\n";
    }


bool buyItems(int playerInventory[numItems])
{
    int input;
    cout<<"Enter -1 to quit.\n";
    cout<<"What would you like to buy? Enter ("<<1 <<"-"<<numItems<<"):\n";
    cout<<":";
    cin>>input;
    

    if(input == -1)
    {
        return true;//the program is over
    }
    if(input<0 || input >  numItems)
    {
        cout<<"Enter a valid option!\n";
        return false;//the program keeps going (goes over the while loop)
    }


    playerInventory[input-1]++;
    return false;
}