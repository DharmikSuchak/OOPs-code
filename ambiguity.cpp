#include<bits/stdc++.h>
using namespace std;

class jeet{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class priya{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class c: public jeet, public priya{

};
int main(){
    c obj1;
    obj1.speak();
}