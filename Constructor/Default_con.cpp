#include<iostream>
using namespace std;


class hero{

    //properties
    private: 
    int health;
    public:
    int level;

    hero(){ //once we write constructor, the inbuilt default constructor will be removed
        cout<<"Default Constructor"<<endl;
    }
};


int main(){

cout<<"Hi"<<endl;
    hero ramesh;
    cout<<"Hello"<<endl;
    hero *b=new hero;
    
    return 0;
}