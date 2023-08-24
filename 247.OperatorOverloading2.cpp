//OPERATOR OVERLOADING 2


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
        
        int value1=this->a;//currentValue or current-Arg

        int value2=obj.a;//input Object jo aaya hai
                         //uska 'a' value utha rahe hai

        cout<<"Output"<<value2-value1<<endl;                 

    }



};


int main(){

    //Object Creation
    //Make 2 Objects of Class B
    B obj1,obj2;

    obj1.a=4;
    obj2.a=7;

    //calling Object1 and Object2
    obj1+obj2;//This will call Operator at line 57
    
    //So here what we have "+" Operator which work was to
    //to do Addition
    //But we changed its work to Subtraction
    //by Operator-Overloading
    
}