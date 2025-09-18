#include<iostream>
using namespace std;


class hero{

    //properties
    private: 
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    // void setHealth(int h, string name){  by this only vatsal can change health
    //its like passsword, so we can use it that way also
    //     if(name=="vatsal"){ 
    //         health=h;
    //     }
    // }

    void setLevel(char ch){
        level=ch;
    }
    //using getter and setter we can access private member in class and we can read or manipulate
};


int main(){

    //creation of object
    hero ramesh;
    cout<<"health is:"<<ramesh.getHealth()<<endl;
    //use of setter
    ramesh.setHealth(50);
    cout<<"health is:"<<ramesh.getHealth();

    return 0;
}