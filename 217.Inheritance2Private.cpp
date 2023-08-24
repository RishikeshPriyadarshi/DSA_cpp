//Inheritance
//Private mode of Inheritance 
//in Parent Class

#include<iostream>
using namespace std;

//Super class or Parent class
class Human{
   
    private: //if it is marked private in Parent class
    int age; //and if we try to inherit  in public way in main
             //then it will show error

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
class Male: public Human{

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

    //making an object of male class, object1
    Male object1;
    //object1.   ,to see what class or property marked public

    cout<<object1.age<<endl;//it has inherited the proprty
                            //from parent class as it is public

    cout<<object1.age<<endl;//It will produce error because
                            //it is marked private in Base Class
                            //& here we try to access it in public way


    cout<<object1.height<<endl;

    cout<<object1.color<<endl;

    //calling funcn
    //cout<<object1.sleep()<<endl;// we cannot print like this
                               //becs it is not returning anything

    //calling funcn
    object1.sleep();

    object1.setWeight(84);
    cout<<object1.weight<<endl;



    return 0;                  
}