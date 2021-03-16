#include<iostream>
#include<cmath>
#include<string>
 
using namespace std;
int main()
{
    string book;
    getline(cin,book);
    int n;
    cin>>n;
    int number = 0;
    while(true)
    {
        string books;
        getline(cin,books);
        if(book==books)
        {
            number--;
            cout<<"You checked "<<number<<" books and found it."<<endl;
            break;
        }else if(number==n)
        {
            cout<<"The book you search is not here! You checked "<<number<<" books."<<endl;
        }
        number++;
 
    }
 
 
    return 0;
}