#include<bits/stdc++.h>
using namespace std;


class student{ //wrapped in class (data members + functions)

    private: //data members
    string name;
    int age;
    int height;

    public:
    int getAge(){ //functions
        return this->age;
    }

};

int main(){

    student first;
    cout<<"working okay"<<endl;
}