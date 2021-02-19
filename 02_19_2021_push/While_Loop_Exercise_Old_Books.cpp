#include<iostream>
//#include <cmath>
#include<ostream>
//#include<vector>
//#include<<sum<string>
//#include <climits>
//#include <algorithm>
#include<string>
//#include <memory>
//#include <sstream>
using namespace std;

//using std::cout;
//using std::endl;

//smart pointer is a wrapper around a pointer //dont have to call new and delete 




int main (){ 

string book;
getline(cin,book);


int lib_cap;
cin>>lib_cap;
cin.ignore();
string lib_book;
int count_book=0;

while(book!=lib_book){
    getline(cin,lib_book);
    lib_cap-=1;
     count_book++;
    if(lib_cap < 0){
        std::cout<<"The book you search is not here!\n";
        std::cout<<"You checked "<<count_book-1<<" books."<<std::endl;
        break;
    }
     
}

    if(book==lib_book){
    std::cout<<"You checked "<<count_book-1<<" books and found it."<<std::endl;
    }

}
