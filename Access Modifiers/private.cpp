#include<iostream>
using namespace std;


class hero{

    //properties
    public: //now we can access it anywhere 
    char name[100];
    int health;
    private: //we can access it with in the class only
    int level;

    void print(){
        cout<<level<<endl;
    }
};


int main(){

    //creation of object
    hero ramesh;
    // ramesh.health=50;
    // ramesh.level=10;
    cout<<"health is:"<<ramesh.health;
    cout<<"level is:"<<ramesh.level; //error
    return 0;
}