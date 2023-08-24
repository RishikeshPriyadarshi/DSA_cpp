#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;

    public:
    char level;//object "level"


    //Default constructor
    Hero(){
        cout<<" Default Constructor"<<endl;
    }

    //Parameterised Constructor
    Hero(int health){
        this->health=health;
        //cout<<"this->"<<this<<endl;
    }

    //parameterised Constructo- Passing 2 arguments
    Hero(int health,char level){
        
        
        this->level=level;//this->level= level at 10
                        //and level= level(input level)at line 31
        
        //here we have copied the value of "input level"
        //into "object level"

        this->health=health;
    }

    void print(){
        cout<<level<<endl;
    }

    //Getter
    int getHealth(){
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
    
    //Object Created Dynamically
    Hero ramesh(10);
    //ramesh.getHealth();
    //cout<<"Address of ramesh is :"<<&ramesh<<endl;
    ramesh.print();


    //Object Created Statically
    Hero *h=new Hero(11);
    (*h).print();
    //or h->print;



    Hero temp(22,'B');
    temp.print();



    return 0;

}