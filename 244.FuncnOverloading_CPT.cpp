/*
  If we have to achieve Funcn-Overloading
  then " we hv to chng a little-bit in Funcn-signature"
*/

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

int main(){

    A obj;
    obj.sayHello();

    return 0;
}

/*
  

    NOTE:"funcn with same " bt "difffrent return type"
    "CANNOT BE OVERLOADED"....
   

   If we hv to do "funcn-oveloading" then,
   "we have to do change in INPUT-ARGUMENTS"

   so 

we can say "Funcn with SAME NAME" and 
           "DIFFERNT ARGUMENTS " can
             do funcn Overloading 
   

*/