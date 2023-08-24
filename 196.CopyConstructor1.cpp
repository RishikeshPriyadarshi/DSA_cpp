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

        cout<<"health is :"<<this->health<<endl;
        cout<<"level is : "<<this->level<<endl;
        //cout<<level<<endl;
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
    
    //object creation
    /* 
    Hero suresh;
    suresh.setHealth(70);
    suresh.setLevel('C');
    */   

   //object creation using Parameterised Constructor
   Hero suresh(70,'B');
   suresh.print();

   //creating other object "ritesh"  & in ritesh copy suresh
   Hero ritesh(suresh);//COPY-CONSTRUCTOR is called
   ritesh.print();

   //so ritesh ke health or level suresh ke equal hogi
   /*
   ritesh.health=suresh.health;//line 1
   ritesh.level=suresh.level;//line 2

   these to lines(lie and line 2) equal to 
   or same as Hero ritesh(suresh) 
   */

}