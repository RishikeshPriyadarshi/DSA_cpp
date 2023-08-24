 Operator-Overloading
        ---------------------

>When we want "Operators of Same Name " to 
   "perform Diff. Tasks"

   Ex: Lets say "+" operator
   --

   lets say + opertaor can perform
     
     .) Addn (in case of number)
     .) Conctenation (in case of string)
     .)and we want when we call + operator
       we want to print "Hello Love " (User/Custom  work)
       or
       do subtraction usin + op etc...(Custom work)


_____________________________________________________________

 "Operators" which "CANNOT BE OVERLOADED"
   
   5 Operators cannot be Overloaded:
   ---------------------------------
   
Conditional or Ternary Operator (?:) cannot be overloaded.

Size of Operator (sizeof) cannot be overloaded.

Scope Resolution Operator (::) cannot be overloaded.

Class member selector Operator (.) cannot be overloaded.

Member pointer selector Operator (.*) cannot be overloaded.

Object type Operator (typeid) cannot be overloaded.

___________________________________________________________________

"Operators" which "CAN BE OVERLOADED"

The list of operators which can be overloaded:
-------------

Arithmetic Operators like %, +, -, *, /

Unary Operators like ++, --,!

Relational Operators like ==, !=, >=, <=

Logical operators like && and ||

Assignment operators like =, +=,*=, /=,-=, %=

Subscript operator [ ]

Bitwise operators like &, |, <<, >>, ^, ~

Note:"Only existing operators in C++ can be overloaded
      and the overloaded operator must have an operand 
      of the user-defined type."

_______________________________________________________________
            
            IMPORTANT:
            ---------


 Among the in-built operators which operators 
 cannot be overloaded 
 using the friend function but can be overloaded 
 by member functions are as follows:

Assignment Operator (=)
Function call Operator (())
Subscript Operator ([])    

_______________________________________________________


EX:
   what we want is whenver we use "+",
   it should return the subtraction of two int. values

   means,
   +  --> 2 int --> subtract

   we will overload "+" operator

   /*
     "+"  is a Binary-Operator hich means it has '2 operands'
                                                  a and b

                         i.e. a+b;                         
   */


   SYNTAX(of Operator-Overloading):

   return-type .OPerator+(can be any Operator) (Name-of-class &NameOfObject)(){
            //& is reference 

   }
  

  ()---> We will put Arguments in this
    
      in case of "+"
               
               a+b;
                 or
               Current-Arg + Input-Arg;



         2nd Argument is the---->INPUT ARG

         1st Argument  is   ---->Current Arg 
                                 pointed by( this->)
