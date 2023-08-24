//OPERATOR OVERLOADING


#include<iostream>
using namespace std;

class A{

    public:
    //funcn
    void sayHello(){ //1st Signature
        cout<<"Hello Izz"<<endl;
    }

    /*
       NOTE:"funcn with same " bt "difffrent return type"
      "CANNOT BE OVERLOADED"....


      public:
    //funcn
    iint sayHello(){ //1st Signature
        cout<<"Hello Izz"<<endl;

        return 1;
    }

    */

   int sayHello(string name, int n){
    cout<<"SUP"<<endl;
    return n;
   }


    public:
    //funcn
    void sayHello(string name){ //changing in funcn Signature
                        // by adding "string name" in funcn
        cout<<"Hello"<<name<<endl;
    }
};

class B{

    public:
    //Variable
    int a;
    int b;

    public:
    //Func
    int add(){
        return a+b;
    }

    //OPERATOR OVERLOADING
    void operator+ (B &obj){

    }


};


int main(){

    //Object Creation
    B obj;
    obj.a=1;
    obj.b=2;

    //funcn call
    cout<<obj.add()<<endl;
}