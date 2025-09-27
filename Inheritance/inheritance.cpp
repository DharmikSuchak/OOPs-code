#include<bits/stdc++.h>
using namespace std;


class human{ //wrapped in class (data members + functions)

    public: //data members
    int weight;
    private:
    int age;
    int height;

    public:
    int getAge(){ //functions
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
};

int main(){

    male object1;
    cout<<object1.age<<endl;

    object1.setWeight(5);
    cout<<object1.weight;
}