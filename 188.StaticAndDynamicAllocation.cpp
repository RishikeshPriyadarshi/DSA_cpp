#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

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

    //Static Allocation
    Hero a;
    //setting value for a
    a.setLevel('B');
    a.setHealth(90);
    cout<<"level is : "<<a.level<<endl;
    cout<<"level is : "<<a.getHealth()<<endl;//we used get because health is private

    


    //Dynamic Allocation
    Hero *b=new Hero;
    
    //setting vale for b
    (*b).setLevel('A');
    (*b).setHealth(70);
    //or
    //b->setLevel('A');
    //b->setHealth(70);

    //for printing dynamically we will use dereference operator
    //i.e (*b)->Dereference-Operator
    cout<<"level is : "<<(*b).level<<endl;
    cout<<"health is : "<<(*b).getHealth()<<endl;

        //OR

    //Derefernce Operator - (*b) can also be writeen as
    //b->
    //cout<<"level is : "<<b->level<<endl;
    //cout<<"health is : "<<b->getHealth()<<endl; 


    return 0;
}