CONSTRUCTOR:

#include<iostream>
using namespace std;

class Hero{

};
int main(){

    //Object Creation
    Hero ramesh;
}

BEHIND THE SCENE:
   
   what is happening BTS when we craeated object ?
   i.e. Hero ramesh; //object is created

   -->so whenever we create an object,
      "1st of all one thing is called CONSTRUCTOR"


Properties of Constructor:

1.It is invoked during object creation time.

2. " it has no return-type".

3. The constructor which we will see now,
   it does not have any input parameter...

----------------------------------------

when we write a class a "default constructor is created"

i.e. ramesh.Hero();//Default constructor
----------------------------------------------------
NOTE: in-built constructor will be deleted automatically
      because "it is non-parameterised constructor"
--------------------------------------------------------
NOTE: When we write parameterised construtor,
      then DEfault consructor dies ,there is no existe. of it
  --------------------------------------------------
NOTE:when we write a class Then an in-built copy-constructor
  is generated automaically,no need to do anything    

  When we write user Defined COPY construtor,
then DEfault consructor dies ,there is no existence of it .
-----------------------------------------------------------------

