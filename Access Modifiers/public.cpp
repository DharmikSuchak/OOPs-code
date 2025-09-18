#include<iostream>
using namespace std;


class hero{

    //properties
    public: //now we can access it anywhere, within class also, outside of the class also
    char name[100];
    int health;
    char level;
};


int main(){

    //creation of object
    hero ramesh;
    ramesh.health=50;
    cout<<"health is:"<<ramesh.health;
    return 0;
}