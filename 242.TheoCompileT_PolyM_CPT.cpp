COMPILE-TIME Polymorphism (CTP)
---------------------------

It is also known as "STATIC-POLYMORPHISM"

>We that which thing exist in whic forms
 during COMPILE-TIME before RUN-TIME

________________________________________________________

It is of 2 Types:

1.Function Overloading
2.Operator Overloading

____________________________________________________

         Function-Overloading
         ---------------------
  "Writing same funcn " in "Multiple Forms"       

>When we want "Funcns of Same Name " in same Class 
 to "perform Diff. Tasks"

NOTE: If we have to achieve Funcn-Overloading
    then " we hv to chng a little-bit in Funcn-signature"


NOTE:"funcn with same " bt "difffrent return type"
      "CANNOT BE OVERLOADED"....

     Ex: void sayHello(){

        }
        
        int sayHello(){

            return 1;

        }

      These Cannot be Overloaded  


     -------

      If we hv to do "funcn-oveloading" then,
   "we have to do change in INPUT-ARGUMENTS"
           |
           |

   void sayHello(){

   }

   int sayHello(string name,int n){

   }

   void sayHello(string name){

   }


     so 

we can say "Funcn with SAME NAME" and 
           "DIFFERNT ARGUMENTS " can
             do funcn Overloading   


_________________________________________________________________

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





