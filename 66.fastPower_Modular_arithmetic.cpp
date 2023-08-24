Fast Power and Modular Arithmetic

a%n
..suppose we have any no. a and we r doing modulo with n ,then
 the ANSWER will be 0 to n-1 included i.e. [0-(n-1)]



Basic Arithmetic:

(a mod m)+(b mod m) mod m = a + b mod m

(a mod m)-(b mod m) mod m = a - b mod m

(a mod m)*(b mod m) mod m = a . b mod m


..//In some competitive question they ask to print  answer as modulo 10^9+7

why do they give this?

>>suppose we wnwt to fnd the factorial and we are NOT going to use LONG LONG,
  
  we r only using int,

  and suppose we want to find the factorial of 20!
  >>we will not be able to caluclate as it will OVERFLOW...

  NOTE:in such case,to save overflow we use MOD.. i.e. modulo

  whatever answer we r getting as 20 then it will be 20 modulo 10^9+7
  >>And the answer which we have got, by using MOD it will come into range and wll be SAVED from 
     OVERFLOW....



_________________________________________________

>(a+b)%m   = a%m + b%m

>a%m - b%m = (a-b)%m

>a%m * b%m = (a*b)%m

_____________________________________________________________

FAST EXPONENTIATION

  previously what we have done is suppose we have to find a to the power b

  i.e. a^b 

  then we had made result, which was intialized 1. and we were executing a loop b times  and in that 
  loop we id result=resilt*a;


  i.e.

  res=1;
    
    for(b time){//its T.C is O(b) i.e O(n)....
        res=res*a;
    }
    


//Suppose we have to find a^b

we can calculate it in two ways:

1st is....

>>(a^b/2)^2 ....if b  is even


2nd is...

>>(a^b/2)^2 *a....if b is odd


example:

2^10= (2^5)^2

2^11=(2^5)^2 *2


NOTE: this process of Fast Exponentiation will give T.C O(logn)