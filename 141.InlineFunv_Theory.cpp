INLINE FUNCTIONS: It is used to reduce the funcn calls overhead..
            it means ,anywhere we r calling funcn multiple times 
            and we have found a method to skip this process...

When we do funcn call, one more funcn gets added after main()
in the stack..
so there is litle decay in performance
-------------------------------------
The Role of Inline func:
>if our funcn body is of 1 line then compiler suggests to make inline 

>if it is of 2 or 3 line then it depends upon compiler,ki wo usse 
 inline manega ya nahi.......

 >if the body is greater than 3 then compiler wil not consider
  it inline funcn......
 -- ------------------------------

 Means if we have considered as inline funcn and compiler approves
 it , then wherever the funcn is called will get replace by this


 it's advantages:
 >No extra  memory uses
 >no funcn call overhead
------------------------------------
So the role funcn is that funcn call gets replace by funcn body
------------------------------------------------
