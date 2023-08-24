//Inheritance

//PRIVATE  PRIVATE

//Here we have used "PRIVATE" "mode of inheritance" 
//in Parent class

//and taking as PRIVATE in child class

#include<iostream>
using namespace std;

class Human{

    private:
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
class Male: private Human{  //

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

/*
 Private(SuperClass) to Private(ModeOfInheritance)
                        Public(ModeOfInheritance)
                        Protected(ModeOfInheritance)

 is NOT-ACCESSIBLE


 In-Short Private(Super-Class) to any Mode-of-Inheritance
 is not Accessible
 It will give Error
*/