//RUNTIME-POLYMORPHISM 1
//in this we do "METHOD-OVERRIDING"

/*
  Rules:
    
    "NAME" of funcn" should be "same"

    "ARGUMENTS of funcn" should be "SAME"

    "can be done by INHERITANCE Only"
*/


#include<iostream>
using namespace std;

class Parent{
    
    public:
    //funcn
    void show(){
        cout<<"Inside Parent Class "<<endl;
    }
};

class subclass1: public Parent{

    public:
    //funcn
    void show(){

        cout<<"Inside Sub-Class1 "<<endl;//Method-Overriding
    }
};

class subclass2: public Parent{

    public:
    //funcn
    void show(){
        cout<<"Insid Sub-Class2"<<endl;
    }
};

int main(){

    //object creation of subclass1 and subclass2
    subclass1 o1;
    subclass2 o2;

    //funcn call
    o1.show();
    o2.show();

    return 0;
}