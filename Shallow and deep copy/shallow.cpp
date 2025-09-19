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
    char *name;

    hero(){
        cout<<"Simple Constructor called"<<endl;
        name=new char[100];
    }


    
    //parameterised constructor
    hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health=health;
        // (object)-->parameter
    }

     hero(hero &temp){ 
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"copy constructor called"<<this<<endl;

        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"Name: "<<this->name<<", ";
        cout<<"Health: "<<this->health<<", "; //this because to know that we are talking about particular object
        cout<<"level: "<<this->level<<endl;

    }

    void setName(char name[]){
        strcpy(this->name,name); //current pointer to name
    }

     void setHealth(int h){
        health=h;
    }

     void setLevel(char ch){
        level=ch;
    }
};


int main(){

     hero hero1;
     hero1.setHealth(12);
     hero1.setLevel('D');
     char name[7]="Babbar";
     hero1.setName(name);

     hero1.print();

     //use default copy constructor
     hero hero2(hero1);
    //hero hero2=hero1;

    hero2.print();

    hero1.name[0]='G';
    hero1.print();

    hero2.print();


}