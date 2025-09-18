#include<iostream>
using namespace std;


class hero{

    //properties
    char name[100];
    int health;
    char level;
};


int main(){

    //creation of object
    hero ramesh;
    cout<<"health is:"<<ramesh.health;
// basics_of_AM.cpp:18:32: error: 'int hero::health' is private within this context
// cout<<"health is:"<<ramesh.health;
    return 0;
}