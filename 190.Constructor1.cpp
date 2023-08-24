#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    //Constructor Creation
    // Hero(){} ...>It is an constructor
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
    cout<<"Hello"<<endl;
    Hero ramesh;//This line will call constructor i.e. o/p- constructor is called
    cout<<"Hi"<<endl;




}