#include<bits/stdc++.h>
using namespace std;


class A{
   
    public:
    void sayhello(){ 
        cout<<"Hey"<<endl;
    }

    //   void sayhello(){ 
    //     cout<<"Hey"<<endl;
    // } give error

    int sayhello(char name){
        cout<<"Hey"<<endl;
        return 'a';
    }

    void sayhello(string name){
        cout<<"hello "<<name<<endl;
    }
};

int main(){

    A obj;
    obj.sayhello("dharmik");
}