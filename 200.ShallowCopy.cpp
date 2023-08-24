#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;

    char *name; //it can also be written as char name[100];
            //but it will take more memory in stack 
            // so instead of that allocate in heap 
            //where there is more memory

    //Default constructor
    Hero(){
        cout<<"Default constructor called"<<endl;

        name= new char[100];//Dynamic allocation of name arr

    }

    //parameterised Constructor
    Hero(int health){
        this->health=health;
    }

    //parameterise constructor with 2 arguments
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    
    /*
    //User Copy Constructor
    Hero(Hero& temp){
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    */

    void print(){
        //cout<<level<<endl;

         cout<<endl;

        cout<<"[health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<" ,";
        cout<<"name: "<<this->name<<"]";
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

    void setLevel(int ch){
        level=ch;

    }

    void setName(char name[]){
        
        //copying current pointer name in name
        strcpy(this->name,name);
    }


};

int main(){

    //object creation
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');

    char name[7]="Babbar";
    hero1.setName(name);

    hero1.print();




 
 //using Default Copy Constructor ,Create one more hero


 //if we r using default C.C ,then we have to comment
 //out user defined copy-constructor we used above
   
   //Hero hero2 =hero1;
   Hero hero2(hero1); //Hero hero2 =hero1;  r same
   hero2.print();

   //now we want to change the name of hero 1 and put 'G' in start
   //and print it
   hero1.name[0]='G'; 
   hero1.print();


   //now if we want to print hero2 then hero2 name also 
   //chnged to "Gabbar" (though it was "Babbar" before)
   hero2.print();
  
/*
  Now the question arises
  we hv changed only hero1 name
  then how hero2 name changed???

 ans-->>we hv created hero1 & printed it ,it gave "Babbar"
      then we copied hero2 and printed it, and it gave "Babbar"

      now hero1 it is giving "Gabbar", because we changed it


      but hero2 is also giving "Gbbar" without making any change

      "It is because Default Constructor uses Shallow copy Concept"

    In short in shallow Copy we r Acessing the Same Memory

         
*/

}