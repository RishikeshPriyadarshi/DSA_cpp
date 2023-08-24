//Inheritance

//PROTECTED  PROTECTED

//Here we have used "PROTECTED" "mode of inheritance" 
//in Parent class

//and taking as PROTECTED in child class

#include<iostream>
using namespace std;

class Human{

    protected:
    int height;

    private:
    int age;

    public:
    //property
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
class Male: protected Human{  //

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
    
    
};


int main(){

    //object
    Male m1;
    //cout<<m1.height<<endl; //inaccessible
    cout<<m1.getHeight()<<endl;

    
    return 0;
}

