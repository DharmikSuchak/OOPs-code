#include<iostream>
using namespace std;


class hero{

    //properties
    private: 
    int health;
    public:
    int level;
};


int main(){

    //creation of object
    //static allocation of object
    hero ramesh;
    hero *ramu=new hero;
    
    cout<<"level is: "<<ramesh.level<<endl;

    cout<<"level is: "<<(*ramu).level<<endl;

    cout<<"level is: "<<ramu->level<<endl;
    return 0;
}