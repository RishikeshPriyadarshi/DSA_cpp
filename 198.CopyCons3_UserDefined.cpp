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



    //User Defined COPY-CONSTRUCTOR
    Hero(Hero& temp){//Hero& --pass by refernce no copy
                    //will be created rather actual value will be passed
        cout<<"copy cvonstructor called"<<endl;            
        this->health=temp.health;//
        this->level=temp.level;//temp is statically allocated
                               //i.e. why . operator(temp.level)
    }

    void print(){
        cout<<"health is : "<<this->health<<endl;
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

    //object creation using parameterised constructor
    Hero suresh(70,'C');
    suresh.print();

    //COPY-CONSTRUCTOR will be Called
    Hero ritesh(suresh);
    ritesh.print();

    /*
    Note: when we write a class Then an in-built copy-constructor
          is generated automaically,no need to do anything
    */
}
