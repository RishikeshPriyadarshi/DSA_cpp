#include<iostream>
using namespace std;

// parnt class1
class Vehicle{

    public:
    //funcn
    Vehicle(){
        cout<<"this is Vehcle"<<endl;
    }
};

//parent class2
class Fare{
    public:
    //funcn
    Fare(){
        cout<<"Fare of vehicle\n "<<endl;
    }
};

//child class1
class Car: public Vehicle{

};

//child class2
class Bus: public Vehicle, public Fare{

};


int main(){

    //creating object of sub-class wiill
    //invoke the constructor of base class
    Bus obj2;
    
    return 0;
}