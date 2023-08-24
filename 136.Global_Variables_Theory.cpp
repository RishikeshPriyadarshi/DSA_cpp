GLOBAL VARIABLES:
 
 Suppose we have a variable and we want to share it between funcns
---------------
when we talk about share , it means our memory blick shoud be,
ONE and ONLY...

Means i  is created only once but it can be accessed by many funcns
memory block will be single, it will be created only once ,can be 
access by many functions
----------------
LOCAL VARIABLE: it has lifspan within thhe block,as the block gets end 
                local vriable also ends with it...

-------------------------------------

NOTE: "Use of Global Variables comes under Bad Practice"

    its disadvantage is that anyone can change it...
    therefore, any funcn can update this global variable,
    and this change will be reflected everywhere...
------------------------------------------
"So whenever it comes to share a variable , use concept of ref. variable"
