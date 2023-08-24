/*
  here "health" has become PRIVATE
  then we cannot Access health outside the class
  it will give error

  in this case we have to use "getter and setter "
  >>There are some funcns,inside the class
    we can access them these variable using those


*/

/*
  By using Getter Setter we can access the member or properties
  of private class outside the class
*/

#include<iostream>
using namespace std;

class Hero{
    
    //Properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    //making GETTER and SETTER

    //making Getter
    int getHealth(){ //this is getter which will give health
        return health;
    }

    char getLevel(){
        return level;//this getter will give level;   
    }

    //making Setter
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }


};

int main(){
    
    //Object Creation
    Hero ramesh;

    //setting value of health using setter
    ramesh.setHealth(70);

    //here we can acces the health of private class
    //because of getter
    cout<<"Ramesh health is : "<<ramesh.getHealth()<<endl;

    //Acessing properties or members using dot operator
   // cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;

    return 0;
}