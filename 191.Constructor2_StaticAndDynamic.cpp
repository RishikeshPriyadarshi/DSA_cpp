#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    //Constructor Creation
    // Hero(){} ...>It is an constructor
    //Default Constructor
    Hero(){
        cout<<"Constructtor called "<<endl;
    }


    void print(){
        cout<<level<<endl;
    }

    //Getter

    int  getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    //Setter
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }
};

int main(){

    //object creation...first is class name, then name of Object
    //Object Created Statically
    Hero ramesh;//This line will constructor i.e. o/p- constructor is called
    
    //Object Creation Dynamically
    Hero *h=new Hero;
    
    //or
    // Hero *h=new Hero();// above and this  r same 
    


  // In output there will be 2-times Constuctor called
  //i.e. 2 times same constructor will be called for static and dynamic object



  //NOTE: in-built constructor will be deleted automatically
  


}