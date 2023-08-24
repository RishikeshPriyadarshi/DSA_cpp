#include<iostream>
using namespace std;

class Animal{

    public:
    int weight;
    int age;


    public:
    void speak(){
        cout<<"speaking"<<endl;
    }


};

//making CHILD-CLASS 1  OR SUB-CLASS 1
class Dog: public Animal{

};

//This class is Inherited by other class
class GermanShephered: public Dog{

};


int main(){
   /*
    //object creation
    Dog d;
    
    //Funcn Call
    d.speak();
    
    //Property Call
    cout<<d.age<<endl;

    */

   //object creation
   GermanShephered g;

   //funcn call
   g.speak();
   
   //property call
   cout<<g.age<<endl;

    return 0;


}