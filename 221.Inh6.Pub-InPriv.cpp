//Inheritance

//Public  Private

//Here we have used "public" "mode of inheritance" 
//in Parent class

//and taking as Private in child class
//Mode of Inheritance is Private

#include<iostream>
using namespace std;

class Human{

    private:
    int age;

    public:
    //properties
    int height;
    int weight;

    public:
    //funcns
    int getAge(){
        return this->age;
    } 

    void setWeight(int w){
        this->weight=w;
    }
};

//SUB-CLASS or CHILD-CLASS
class Male: private Human{

    public:
    //property
    string color;

    //funcn
    void sleep(){
        cout<<"Male is Sleeping "<<endl;
    }

    int getHeight(){
        return this->height;
    }
    
    /*
    int getAge(){
        return this->age;
    }
    */

   int getWeight(){
   return  this->weight=84;
   }
};


int main(){

    //object
    Male m1;
    cout<<m1.getHeight()<<endl;

    //cout<<m1.getAge()<<endl;

    cout<<m1.getWeight();

    return 0;
}

