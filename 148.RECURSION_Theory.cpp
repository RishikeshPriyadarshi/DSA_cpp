RECURSION:"When a funcn calls itsel directly or in-dir. called Recursion"

     Example:

      solve(int n){


        solve(n);
      }
      //Here we have written a func solve() and called it within itself
      //parameter was integer, that is calle Recursion a/c to Book..

  Real life ex:I gave student a pen and student gave it to me,
              indirectly recursion is happening here..

---------------------------------------
Suppose we have a big problem:
 
 Then our complex problem's soln depend upon same type of the 
 smaller/simple problem.. and for that we will use Recursion's way
 ----------------------------------------
 Recurrence relation: Breaking Complex problem to smaller problem(chooti problem)
  ex: n!=n*(n-1)!
      
      converting into recursive relation

      f(n)=n*f(n-1)
 
 ---------------------------------------------
 For Reursion we will need 2 things:
1. Base-case--->whic will tell us where to Stop 
   "in Base-case  writing return is mandatotry "


2. Recurrence-Relation 
----------------------------------

NOTE: "If we remove the Bae-case it will give SEGMENTATION-FAULT"
-------------------------------------------------------

for Recursive Relation these 3 thing are Mandatatory:
 
 1.Base case
 2.Recursive Relation(R.R)
 3.Processing Part---suppose if we want to print something 
                     
                     ex: cout,update,++,--,+2 ... etc 
-----------------------------------------------------------

There r 2 types of Recursive Function:
 
1.TAIL RECURSION: "In this case Recursive Relation comes in end"

  func{
    BASE CASE;

    PROCESSING;

    RECURSIVE-RELATION; //Tail recursion
  }


2.HEAD Recursion: "In this case processing part come in end"  
  
  func{
    BASE CASE;

    RECURSIVE-RELATION;;

     PREPROCESSING//Head recursion
  }




