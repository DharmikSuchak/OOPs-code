#include<bits/stdc++.h>
using namespace std;


class human{
    protected:
    int weight;
    int age;
    int height;

    public:
    int getAge(){ 
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }

};

class male: public human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping";
    }

    int getHeight(){
        return this->height;
    }
};

int main(){

    male object1;
    cout<<object1.getHeight()<<endl;

}