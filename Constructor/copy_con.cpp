#include<iostream>
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
    
    //parameterised constructor
    hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health=health;
        // (object)-->parameter
    }

     hero(hero &temp){ 
        cout<<"copy constructor called"<<this<<endl;
        this->health=health;
        // this->level=level;
    }

    void print(){
        cout<<this->health<<endl; //this because to know that we are talking about particular object
        // cout<<this->level<<endl;
    }
};


int main(){

// cout<<"Hi"<<endl;
//     hero ramesh;
//     cout<<"Hello"<<endl;
    // hero *b=new hero;

    //when one constructor is made then default constructor will be removed
    hero ramesh(20);
    ramesh.print();

    //copy all data members with value of ramesh
    //copy constructor call
    hero R(ramesh);
    R.print();   
}