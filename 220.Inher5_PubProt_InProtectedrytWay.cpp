//Inheritance

//Public  Protected

//Here we have used "public" "mode of inheritance" 
//in Parent class

//and taking as Protected in child class

//right way to acess in Protected 

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
    //funcs
    int getAge(){
        return this->age;

    }
    void setWeight(int w){
        this->weight=w;
    }
};

//SUB CLASS or CHILD CLASS
class Male: protected Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }


    //Here the private memeber height is accessed
    //within the class which is protected 
    int getHeight(){
        return this->height;
    }
};

int main(){

    //object
    Male m1;
    cout<<m1.getHeight()<<endl;

    return 0;
}