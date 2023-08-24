//Inheritance

//Public  Private

//Here we have used "public" "mode of inheritance" 
//in Parent class

//and taking as Private in child class

#include<iostream>
using namespace std;

class Human{

    private:
    int age;

    public:
    //properties
    int height;  //these will also become private because
    int weight;  //when super class is publc, and
                 //when we do Mode of Inheritance Private
                 //then these property will also become private

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

