//Single-Level Inheritance

#include<iostream>
using namespace std;

class Animal{

    public:
    //property
    int age;
    int weight;

    public:
    //funcns
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{ //Here Class Dog 
                          //inherited class Animal

};

int main(){

    //object creation
    Dog d;

    //funcn call
    d.speak();
       //cout<<d.speak()<<endl;

    //Property call
    cout<<d.age<<endl;   


    return 0;
}