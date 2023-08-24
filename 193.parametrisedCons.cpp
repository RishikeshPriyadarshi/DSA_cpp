#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    //Constructor Creation(Default Constructor)
    // Hero(){} ...>It is an constructor(Default)
    Hero(){
        cout<<"Constructtor called "<<endl;
    }

    //Parameterised Constructor
    Hero(int health){
        //printing "this"
        cout<<"this-> :"<<this<<endl;

        this->health=health;//line 7(health ) takin val of line(19)
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

   //object created statically
     //Hero ramesh;
   Hero ramesh(10);   
   
   cout<<"Address of ramesh : "<<&ramesh<<endl;

   ramesh.getHealth();



   //object created Dynamically
   //Hero *h=new Hero;
   Hero *h=new Hero(11);




}