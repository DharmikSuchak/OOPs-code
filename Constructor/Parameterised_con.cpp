#include<iostream>
using namespace std;


class hero{

    //properties
    private: 
    int health;
    public:
    int level;
    
    //parameterised constructor
    hero(int health){
        cout<<"this ->"<<this<<endl;
        this->health=health;
        // (object)-->parameter
    }

     hero(int health, char level){ 
        cout<<"this ->"<<this<<endl;
        this->health=health;
        this->level=level;
    }

    void print(){
        cout<<health<<endl;
    }
};


int main(){

// cout<<"Hi"<<endl;
//     hero ramesh;
//     cout<<"Hello"<<endl;
    // hero *b=new hero;

    //when one constructor is made then default constructor will be removed
    hero ramesh(20);
    cout<<"Address of ramesh:"<<&ramesh<<endl;
    ramesh.print();

    hero *h=new hero(11);
    h->print();

    hero temp(22,'B');
    temp.print();
    
    return 0;
}