
// DYNAMIC MEMORY(HEAP) Allocation


so the question arises: 
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

-----------
EX: Suppose we want to create a char variable in heap memory
    

    so we have to write "new char", when we write this 
    we allocated a memory space in heap 
    :

    new char;//memory space dynamicllly allocated in heap


NOTE: When we use the STACK MEMORY called "Static memory allocation"
    
    : when we use HEAP MEMORY  called "Dynamic memory allocation"

______________________ 
 when we write:
  new char;
  here what happened is that the required memory get allolcated
  and this stmt(new char) returns us the address of block in Heap..
  ______________ 
now the question arises
Q. Instead of address can we have name like in stack we used to 
   tell( like: int i=5; int arr[50]  etc)?
>> NO, here "name is not allowed "

   "we cannot intialize like int i=10"

   instead here we can write as 'new int', it will form one int 
   here we cannot use name,, it will return address...
___________________
Q.If it is returning Address, How can we use it?
...>Here we will "use POINTERS to store Address" 
     we can write:
     char *ch=new char; 

     //new char will be stored in HEAP

     // POINTER char *ch will be stored in STACK

     in this way can allocate memory inside heap 
     and using pointer(*ch), we can access it..
