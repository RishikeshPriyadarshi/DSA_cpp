//Inheritance

//Public  Protected

//Here we have used "public" "mode of inheritance" 
//in Parent class

//and taking as Protected in child class

#include<iostream>
using namespace std;

//Super class or Parent class
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

//Sub class or Child class
class Male: protected Human{

    //we will add some extra properties from our side 
    public:
    //property
    string color;

    public:
    //making funcn
    void sleep(){
        cout<<"Male Sleeping "<<endl;
    }


};

int main(){

    Male m1;
    cout<<m1.height<<endl;

    
}

