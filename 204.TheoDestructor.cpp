DESTRUCTOR:

"it is used to deallocate the memery"

Note--> As our Objects becomes Out-Of-Scope(means when it lifetime is ending),
        then Destructor is called to free up the memory


        int main(){
   //static allocation
    Hero a;

    //lets say this funcn has ended here we have made Hero
    //and as soon as we reach line 21,ts scope has ended
    //so object will die, and so Destructor will be called 
    //and memory willl be freed
    



}

//in same way during class formation ,Dest. created Automatically


---------------------------------------------------

Note:"Destructor has same name as class .."
     
     "it has no return-type"

     "it also has no parameter"
-----------------------------------------------------------

How to diffrentiate betwen Constructor and Destructor?

>--- Destructor is representted by Tilde(~) sign
    
    ex :  ~Hero(){

            cout<<"Destructor is called "<<endl;
          
         }

      //As we write Own Destructor here ,inbuilt Destructor
      //will be removed   



    -----------------------------------

    int main(){
   //static Allocation
    Hero a;//For Static ASllocation Destructor is automatically called


    //lets say this funcn has ended here we have made Hero
    //and as soon as we reach line 116,ts scope has ended
    //so object will die, and so Destructor will be called 
    //and memory willl be freed


    

    //Dynamic allocaton of Object
    Hero *b=new Hero();//Destructor is automatiaclly created
                      //but if we want to create we can do it
            
    
//For Dynamic Alloction we have to call Destructor Manually
   delete b;//manual destructor call

    return 0;   



}
---------------------------------------------------------

NOTE: As we have said Constructor for any Object
      called Once at time of it Creation


     Similarly Destructor is Called Once for each element
     during its Derstruction Time.


    