#include<iostream>
using namespace std;


// class hero{

// }; this is how we create class

// class hero{

//     //properties
//     char name[100];
//     int health;
//     char level;

// }


class hero{
    int health;   
};

class hero{
  //no properties, if we define object of this class the object will have size=1Byte;  for tracking object
};



int main(){

    //creation of object
    hero h1;
    // cout<<"size: "<<sizeof(h1)<<endl; output --> 4
    return 0;
}