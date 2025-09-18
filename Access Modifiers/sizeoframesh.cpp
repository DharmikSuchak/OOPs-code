#include<iostream>
using namespace std;


class hero{

    //properties
    private: 
    int health;
    public:
    char level;
};


int main(){

    //creation of object
    //static allocation of object
    hero ramesh;
    cout<<"size is:"<<sizeof(ramesh)<<endl; //why not 5 because int = 4 bytes and char=1 bytes

    return 0;
}