//Heirarchial Inheritance

#include<iostream>
using namespace std;

class A{

    public:
    //funcn
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};

//making Class "B" Inheriting from Class "A"

class B: public A{

    public:
    //funcn
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

//making Class "C" Inheriting from Class "A"(Parent Class)

class C: public A{

    public:
    //funcn
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};

int main(){

    //making Object of class A
    A object1;

    //funcn call
    object1.func1();


    //making object of class B
    B object2;

    //funcn call
    object2.func1();
    object2.func2();

   //making object for class C
   C object3;

   //funcn call
   object3.func1();
   object3.func3();

    return 0;

}