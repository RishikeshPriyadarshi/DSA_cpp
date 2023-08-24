//Using Getter and Setter we can access the private members

/*
  GETTER- It is used to read/Fetch the data
  
  -------------------------------------------
  SETTER- It is used for putting any condition

        ex: if we want to check Only user A can change it
            and no other can do it

            void setHealth(int h, char pswd){
                if(pswd=="A"){
                    health=h;
                }
            } 


     Setter can be used hen we wnt to use any password
     or any specific condition..       
    ----------------------------------------------------


*/
#include<iostream>
using namespace std;

class Hero{

    //properties
    
    private:
    int health;

    public:
    char level;

   //Getter
   int getHealth(){
    return health;
   }

   int getLevel(){
    return level;
   }

   //setter
   void setHealth(int h){
    health=h;
   }

   void setLevel(char ch){
    level=ch;
   }
    

};

int main(){

    //object creation
    Hero ramesh;

    //here we r using int for health for ramesh so int =4
    // and for level for ramesh so char=1
    //so size of ramesh=4+1
    cout<<"Size of Ramesh : "<<sizeof(ramesh)<<endl;
    //but output which will come is 8 instead of 5
    //so learn about PADDING and GREEDY-ALIGNMENT

     ramesh.level='A';

    //setting value of health  using setter as it is private
    ramesh.setHealth(79);
    
    
    cout<<"Ramesh level is : "<<ramesh.level<<endl;

    //we can get output using get in case of health
    cout<<"Ramesh health is : "<<ramesh.getHealth()<<endl;
    



}