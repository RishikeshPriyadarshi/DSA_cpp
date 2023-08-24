BAD PRACTICE IN Array:

int n;
cin>>n;

int arr[n]; //This is Bad Prctice
    
This is Bad Practice because, the size here  we r getting here 
is a/c to this case, and we r knowing at runtime the size of arr 
Because we r taking it from user 

the size of arr i.e n  " should be known at Compile Time"


NOTE: "we should have knowledge about Size at COMPILE TIME"
      It is good thing to know at Compile Time 

      >>Knowing at Compile time means,we should intialize the array 
        like this:

        if we have difficulty, "Take an array of big size"
        
        but for know give fixed size to array not variable sizeof

        int arr[10000];








      
     >> Knowing at Runtime is not Good Practice

--------------------------

Q.Why not at Runttime?
>>Don't give size at runtime, whenevr the program starts,
  it brings some memory with itself,this memory is divided into 
  2 types: one is "STACK" memory ....>BIGGER Memory
           oher is "HEAP" memory ....>smaller memory


           let's assume stack as this and heap as this ,
           from this we understand it brings "less stack memory"
           and "greater heap memory"..


 Means if we give size at compile time then it brings  stack memory
 a/c to size ,as here 10000 as size ,so it will bring stack memory




>> if we use this syntax " int arr[n]; "
   then the memory allocated to array from stack

   now when we have said we have this much of memory in starting
   and we have to make size of array. Therefore at Runtime we 
   instructed to make memory of this much size (i.e. n  i.e arr[n])

    then the system checked, is it possible to make this size of arr 
    it is found that it has the lesser memory than the given size
    so it get crashed...

    This is the reason  it is the bad practice beacause stack may 
    not have that much of memory available that we r demanding

    or we can also say that this is the reason that we do not use 
    variable to input size..(i.e. arr[n]),  here n is variable size 



NOTE: When we use the STACK MEMORY called "Static memory allocation"
_____________ 

so the question arises 
Q.Did it means we will nott be able to make variable array?
>>Yes we can 

"Till now whatever we have created that was the Game of Stack"
 :
 int i=5;
 int arr[50];
 char ch;

 These all r being stored in the 'Stack memory'...
 we have not the Heap memory yet

_________ 

"So if we want to make Variable Size Arrray"
we will make it using HEAP
As Heap memory has lots of space...


NOTE: If we have to use the memory of HEAP
      " we use the  'new' keyword"

      means if we want to create something in Heap we will use 
       new keyword....







     

