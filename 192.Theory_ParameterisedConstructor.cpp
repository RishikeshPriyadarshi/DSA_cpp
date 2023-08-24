PARAMETERIZED CONSTRUCTOR 

EX: 
    

        /*
          This is bit confusing when the 
          input parameter--->int health

          and data member-->health 

          both are of same name then we get confused

            i.e health= health


         if we remeber variable scoping ,as we access health here,
         we r talking about "health", wwhose scope will be nearer
             
        */


//parameterised constructor
Hero (int health){
    //here we r putting the val of int health into int health only..
    health=health;
    //in short what we r doing is  this is a block health,
    //we filled the value within itself
    //means if there is '3' we put again 3 within itself


   //but we want the health i.e int health above the 
  // parametrised constrctor to be filled with the
  //value of the health at parametrise constructor so,

  this->health=health;

}

    /*
      if we remeber variable scoping ,as we access health here,
     we r talking about "health", wwhose scope will be nearer
             
    */

   

---------------------------------------------------
"this" keyword is very helpful in paramterised constructor

>>Whatever is our current object,
  in our case current object is ramesh
  its(ramesh) address is stored in "this"


  it means "this is a pointer" which is pointing to our
  current object..

--------------------------------------------------
What is CURRENT OBJECT ??

>if we make call   ramesh.getHealth();
 then our current object is ramesh

so address of ramesh will be stored in "this pointer"

so,

this->heath=health;