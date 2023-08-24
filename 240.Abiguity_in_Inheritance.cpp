//AMBIGUITY in Inheritance , is solved by
//Scope-Resolution Operator(::)

#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I m A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I m B"<<endl;
    }
};


//Class C inhrtiing from both A and B

class C: public A, public B{

};

int main(){
    //Object creation of class C
    C obj;

    //funcn call
      //obj.func(); //it will cause error

      obj.A::func();
      obj.B::func();


    return 0;
}