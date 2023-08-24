Referenc Variable:
>>lets understand it by example

ex:
let's consider a boy whose name in schhol is LOVE 
same little boy name at home is LOVELY

..Here we can see that the boy is same but the diffrent name in diffrent places,
these is same as reference variable


NOTE: So we can say reference variable means SAME MEMORY BLOCK,
      but Diffrtent-Diffrent names sometimes


      EX: supppose let int i=5, it means there will be block of memory,
        it's name will be i and its value wil be 5,let's assume it's 
        address is 700

        As e can see block name is "i",if we give it another name like
        'j' ...So this the concept of reference variable...
              i.e. same memory diffrent names



 How Refernce Variable is Created???

:
  int i=5;

  int& j=i;// This the way to create refrence variable


  What happened with above 2 statements?
  ..>The 1st stmt created a memory block having address 700 contaning 5

  ..>The 23nd stmt creates a refernce variable which contais the
     address of block.

   Note: Now if we write i++, then 5+1 will be 6
        and same will happen in case of j


----------------------
Why do we need Refernce Variable?

>>We had came across a concept while learning function that,
  let's assume,there is main(), and update()..
  update() funcn will just update the value,which we will give it,that's it 

          update(int n){
            5//pass by value
            n++;
          }


  assume inside main() we printed 'before' which value is 5,then we called
  the function(i.e.n)..
  A new 'n' will be created containing 5, and when we do n=n+1,
   n necomes 6 ....


   main(){
    before//5

    update(n)

    after//
   }

   then we tried to print 'n' in 'after' but still is printing 5.

   Value didn't get UPDATED because we passed it as 'call by value'
   therfore a copy is created..


   this 'n' of main()  and when we call update() a new 'n' is crteated
   so when we increment 'n' of update() is incremented a
   and it is not reflected in main()...


------------------------------------
 In "Pass By Value", when a funcn calls another funcn by this method
  ,an copy of parameter is passed, a new memory is allocated,
  and new copy will fill this memory..



  In "Pass By Refernce", when a funcn pass parameter to another funcn 
  where we take it as refernce variable, memory location remains the 
  same , same memory will be used but we will give it an another name..

---------------------

>>we can pass the parameter as refernce variable in a function

void update(int& n){

}


>> we can also create reference variable like this also

NOTE:This is very BAD PRACTICE

int& update(int n){

  int a=10;
  int &ans=a;

  return ans;

}

.. now the Question ill there be any problem with it?
 ..>the answer is yes

    so if we see carefully,there is mistake being made,
    the ans variable we made, we returned it,
    but we know is that num is a local variable of int& funcn(int a)
  


  It is very BAD PRACTICE to write because,

  if we see carefully, "num is local variable to block(i.e.funcn)"

  refernce variable we made i.e int& ans has also life span 
  upto the region of funcn only, after that it is no acessible,
  it becomes __DECIMAL_DIG__


  so when the block int& funnc gets over, Memory gets Cleared
  there is nothing remains to pass.
  Therefore it is very bad practise to do,we will get warning
  during compiling...

  



