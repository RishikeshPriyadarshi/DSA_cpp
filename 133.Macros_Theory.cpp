MACROS:

>"#define" is the thing wih the the help of which we will define 'Macro'

/*
  Remamber we use to define "#include<iostream"
  >it is a pre-processor directive
  preprocessor-directive---means befor compilation of our program,
  whatever file we r talking about will be copied in our code,
  and code we r using will be referred from there..

  EX: if we have used 'cout' somhere in the code,
     "the defn of cout is written in iostream",
     therefore the pre-processor directive which includes iostream file,
     and brings it our source code..
*/

Ex of #define:
     
     suppse we have written a code where we have used pi(3.14),
     multiple times in our code

     suppose we have used p1(3.14) 10 times in our code,
     
     and lets assume in future we find that this '3.14' 
     value calculated mistakenly
     and the right value is '3.29'

     now we have to go to 10 places, and We have to replace '3.14'
     with '3.29'
     is it a good practice?
     >NO 
    --------
    Suppose if someone says intalize a variable 'double pi=3.14'
    and use it everywhere,now if u want to change it change it  here 

    But what is the problem with this method?
    >we have taken storage here for creating this variable,it has 
     gotten memory block which name is 'pi',contain 3.14
     so we have used the storage
     ' and it will affect the performance '..

    and if someone change the value then also it ill get affected

    ------------
    so we can optimize this using #define
    
    therefore we can create macro "#define PI 3.14"
   -----------
   Macro-It can be defined as piece of code in a program that
         is replaced by the value of macro...
         
