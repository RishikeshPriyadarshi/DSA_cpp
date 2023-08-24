//Multiple Inhertitance

#include<iostream>
using namespace std;


class Animal{

    public:
    //properties
    int age;
    int eight;

    public:
    //funcn
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human{

   public:
   string color;

   public:
   //funcn
   void speak(){
    cout<<"speaking"<<endl;
   } 
};


//Doing Multiple Inheritance

class Hybrid: public Animal, public Human{
    
};

int main(){
    
    //Object Creation
    Hybrid h;
     
     //func call
     h.speak();
     h.bark();
}

