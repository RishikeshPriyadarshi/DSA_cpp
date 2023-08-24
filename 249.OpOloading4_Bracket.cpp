//OPERATOR OVERLOADING 3

//Overloading Bracket-Operator i.e ()
//


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

    //OPERATOR( i.e.+ OVERLOADING
    void operator+ (B &obj){

        /*
        
        int value1=this->a;//currentValue or current-Arg

        int value2=obj.a;//input Object jo aaya hai
                         //uska 'a' value utha rahe hai

        cout<<"Output"<<value2-value1<<endl;    

        */
       cout<<"Hi Love"<<endl;             

    }

    //BRACKET-OPERATOR i.e.() Overloading
    void operator() (){

        cout<<"Mai Bracket Hu after Ovrload"<<endl;
        cout<<"Mai Bracket hu "<<this->a<<endl;
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
    //But we changed its work to Custom Functionality of Print
    //by Operator-Overloading


    //Object1 is calling Bracket-Overloading
    obj1();//means obj1 ki value bhi print honi chaiye
           //Bracket overloading walin funcn me

    
}