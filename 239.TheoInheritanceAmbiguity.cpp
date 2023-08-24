 INHERITANCE-AMBIGUITY:


 To solve Ambiguity we use "SCOPE RESOLUTION" operator(::)


            A    B
            \    /
               C


    There is "A" and "B"    and C is inheriting Both


    now supose: 
    in class "A" and class "B" have func() of same name

    class A{
        func();
    };

    class B{
        func();
    };          


    //now supposse we make Class "c", in which 
    //it inherits the funcn() of "A" and "Funcn " of B
    //and these funcns() are of same name

    class C: public A, public B{

    };

    //now if we make a call ,make a object of C ,
    //then call object.func()
    //then hich func() will be called func() of A or func() of B
 int main(){
    //object creattion
    C obj;

    //funcn call
    obj.func();//it will cause ambiguity
 }

 //To solve this AMBIGUITY
 //We Use "SCOPE RESOLUTION " Operator(::)

   like this:

   Syntax:
     
     Object-Name.Class-Name::(scope-res op)funcn_name();

     obj.A::func();
     //here funcn of Class A will be called