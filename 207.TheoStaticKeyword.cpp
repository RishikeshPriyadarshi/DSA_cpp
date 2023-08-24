STATIC KEYWORD:

"It create such type of a Data-Member which belong to class"

line.3 means To aceess it we do nott need to make object
      
      or

when we r creating member in static keyword, and 
to access that we do not need to make object...



for example:
   
   private:
   int health;

   public:
   char level;
   char *name;



   int timeToComplete


   //Means if e have not any Object then also we can access 
   // timeToComplete variable or property..

   ----------------------------------------------------------
  NOTE: To access staic keyword we have to inatize it 
        outside the class ,by using Resolution(::) operator

        to inatialize we will write:

        data-type class name :: field(or data member)name =value;

        //syntax
        int Hero::timeToComplete=5;

-----------------------------------

int Hero::timeToComplete=5;


int main(){

    //we have not created any object
    //but we want to access static member
    //we can print it directly

    cout<<Hero::timeToComplete<<endl;



}

----------------------------------------------------------
//Not Recommended by creatin object and then acessing

int Hero::timeToComplete=5;


int main(){

    //we have not created any object
    //but we want to access static member
    //we can print it directly

    cout<<Hero::timeToComplete<<endl;


    //creating Object then Acessing or printing
    Hero.a;

    cout<<a.timeToComplete<<endl;


    //The above(on line 75, 77 ) will run ,
    //but it(timeToComplete) does not belongs to object, it belong to our class
    





}








