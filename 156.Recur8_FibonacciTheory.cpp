/
  0,1,1,2,3,5,8,13,21--------

  if here we talk about base case ,if someone wants
  1st term, then give 0
  if someone asks for 2nd term , give 1

  for other(terms) we can find it 

  Because for 1st and 2nd we cannot  find this(Previous term)
  so we r including it in base case.

  After that there are previous terms for each 
  
 
   Base case:
   
  so if(n==0)
     return 0;

     if(n==1)
     return 1;

     thats it





  fibonacci--Any number is made by sum of prevoius 2 terms

  so for nth term:
  f(n)=f(n-1)+f(n-2)
  we got the relation(R.R)

  FOR Base case(where we have to Stop):
     
     if we remember PMI(Principal of Mathematical Induction)
       in that case we used to do 3 things:
       1.there was base case p(0) or p(1), we have to prove it true
           we have to solve 1 case

           This is the base case

       2. 2nd case , f(k) assume it true

       3. 3rd step we have to prove f(k+1) is true
          

          if we see carefully this is recursion


//give 8th fibonacci number
/*
 so we have to create the funcn which gives 8th fibonacci number
*/





