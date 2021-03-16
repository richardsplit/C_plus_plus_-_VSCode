#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

class Monster{
public: 
    void grow(){
        cout<<"Growl!!!\n\n";

    }

void setName(string name)
{
 _name=name;   
}
string getName(){
    return _name;
}
private:
    string _name;
};

int main()
{
    Monster monster_first;
    monster_first.grow();
    monster_first.setName("George");
    cout<<monster_first.getName()<<endl;
    system("PAUSE");
    return 0;
}
