/*
 Note:Default Copy Constructor do Shallow copy

 Note: But if want to do "DEEP-COPY"
      We will form new array
*/

#include<iostream>
#include<cstring>//for strcpy
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;

    char *name;

    //Default Constructor
    Hero(){
       name= new char[100];

       cout<<"Default Constructor Called"<<endl;
    }

    //parameterised Constructor
    Hero(int health){
        this->health=health;
    }

    //Parameterised Constructor with 2 args
    Hero(int health , char level){
        this->health=health;
        this->level=level;
    }
    
    
    //user defined copy constructor
    //for "Deep copy"
    //by making an  new array
    Hero(Hero &temp){
         
        //making an new array 
        //we did +1 here ,because there is null character 
        //also in the end of the array
        char *ch =new char[strlen(temp.name) + 1];

        //copy the name of temp in ch
        strcpy(ch,temp.name);

        //now update the name of "this" into ch
        this->name=ch;
         
        cout<<"copy constructor is called "<<endl;
        this->health=temp.health;
        this->level=temp.level;   
    }

   

     void print(){

        cout<<endl;

        cout<<"["<<"health : "<<this->health<<", ";
        cout<<"level : "<<this->level<<", ";
        cout<<"name : "<<this->name<<"]";
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

     void setLevel( char ch){
        level=ch;
     }

     void setName(char name[100]){
        //copying current ptr in name
        strcpy(this->name,name);
     }


     //Destructor 
    ~Hero (){
        cout<<"Destructor is called "<<endl;
    }  
    //As we write Own Destructor here ,inbuilt Destructor
      //will be removed  

    




};

int main(){
   //static Allocation
    Hero a;//For Static ASllocation Destructor is automatically called


    //lets say this funcn has ended here we have made Hero
    //and as soon as we reach line 116,ts scope has ended
    //so object will die, and so Destructor will be called 
    //and memory willl be freed


    

    //Dynamic allocaton of Object
    Hero *b=new Hero();//Destructor is automatiaclly created
                      //but if we want to create we can do it
            
    
//For Dynamic Alloction we have to call Destructor Manually
   delete b;//manual destructor call

    return 0;   



}
    /*

    //Object creation
    Hero hero1;

    hero1.setHealth(70);
    hero1.setLevel('D');

    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();


   // Hero hero2 = hero1;
   Hero hero2(hero1);


   hero1.name[0]='G';
   hero1.print();

   hero2.print();

   */