SHALLOW and DEEEP Copy
--------------------------------

NOTE:"Default-Constructor does the Shallow Copy".
----------------------------------------------


SHALLOW COPY:

"in Shallow Copy we simply sent address and Setter"

int main(){

    //object creation
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');

    char name[7]="Babbar";
    hero1.setName(name);

    hero1.print();




 
 //using Default Copy Constructor ,Create one more hero


 //if we r using default C.C ,then we have to comment
 //out user defined copy-constructor we used above
   
   //Hero hero2 =hero1;
   Hero hero2(hero1); //Hero hero2 =hero1;  r same
   hero2.print();

   //now we want to change the name of hero 1 and put 'G' in start
   //and print it
   hero1.name[0]='G'; 
   hero1.print();


   //now if we want to print hero2 then hero2 name also 
   //chnged to "Gabbar" (though it was "Babbar" before)
   hero2.print();
  
/*
  Now the question arises
  we hv changed only hero1 name
  then how hero2 name changed???

 ans-->>we hv created hero1 & printed it ,it gave "Babbar"
      then we copied hero2 and printed it, and it gave "Babbar"

      now hero1 it is giving "Gabbar", because we changed it


      but hero2 is also giving "Gbbar" without making any change

      "It is because Default Constructor uses Shallow copy Concept"

    In short in shallow Copy we r Acessing the Same Memory

         
*/

}

---------------------------------------------------------------------
DEEP COPY:

"in Deep Copy we made entirely diffrent array"

/user defined copy constructor
    //for "Deep copy"
    //by making an  new array
    Hero(Hero &temp){
         
        //making an new array 
        //we did +1 here ,because there is null character 
        //also in the end of the array
        char *ch =new char[strlen(temp.name) + 1];

        //copy the name of temp in ch
        strcpy(ch,temp.name);

        //now update the name of "this" into ch
        this->name=ch;
         
        cout<<"copy constructor is called "<<endl;
        this->health=temp.health;
        this->level=temp.level;   
    }
