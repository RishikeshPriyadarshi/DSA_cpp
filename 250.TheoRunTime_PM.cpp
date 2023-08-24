      RUNTIME-POLYMORPHISM
      --------------------

 It is also known as "DYNAMIC-POLYMORHISM"


There are somethings which we know at run-time ,
that these will exist in many forms


_______________________________________________________

Its Main-Functionality is "METHOD-OVERRIDING"
                           -----------------


EX:
---
 Suppose we have made a class Animal, under which there is
  funcn called speak()...

 And we have inherited class Animal in "Dog class"

 and Dog says I don't speak, I break

 so Dog class implement speak a/c to it's own way

 like if there is "speaking" in cout of Animal

 Dog will do cout of "barking" , in its own way


        
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog{
    public:
    void speak(){
        cout<<"barking"<<endl;//METHOD OVERRIDING
    }
};



So what Happened is :
"one class is inherited from parent class
and it implemented same method with diffrent way"

 _______________________________________________________


RULES for METHOD-OVERRIDING:
----------------------------

>The method of parent class and name of
  child class must be same

>The method of parent class and child class 
 must have same parameters

>"It is Possible through INHERITANCE Only"


