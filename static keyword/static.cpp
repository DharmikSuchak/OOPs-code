#include<iostream>
#include <cstring>
using namespace std;

class hero{

    //when we write class then an inbuilt copy constructor will be builted 
    //we dont need to do anything
    //default constructor will copy data member and values to new object

    //but we can make our own copy constructor also,
    //then default copy constructor will not exist anymore 


    //properties
    private: 
    int health;
    public:
    char level;
    static int timetocomplete;

};

int hero::timetocomplete=5;

int main(){

    cout<<hero::timetocomplete<<endl; //try to use this way more, else it will work with objects also

    hero a;

    cout<<a.timetocomplete<<endl; //not to use it because static keyword we use for class not 
    //for objects

    hero b; 
    b.timetocomplete=10;
    cout<<a.timetocomplete<<endl;
    cout<<b.timetocomplete<<endl;


}