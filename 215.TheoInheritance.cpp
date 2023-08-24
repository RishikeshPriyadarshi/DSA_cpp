INHERITANCE:
"There will be Class , it will have some properties, behaviour
and we will inherit at any other class "

ex: your height is same as ur father
    your father is tall so u r tall..

    so we have "inherited the charcterstic" of father


Inheriitance is same concept
>There will be Class,it will have some properties, behaviour ,
  and we will ainherit it any other class 

  suppose ther is Class A and Class B 

  Class A


  Class B 

  //so we have inherited some property of class A

  ----------------------------------------------------

  suppose we have class named Human,
  and it has properties like height, weight, age 

  now if we have to make a "male class " and "female class"

  so all properties will be same in both class , because
  they both r human

  rather than writing same type of code for both class 
  "we will inherit proprtis in both"

  --------------------------------------------------------
  SUPER CLASS(PARENT CLASS) and SUB CLASS(CHILD CLASS):

  when we say "Human class" and "male class" has 
  inherited the properties and funcns

  in this case "Human class is Parent/Super class"
    and 
   the class inheriting "male is Sub Class"....
   --------------------------------------------------

   NOTE: Here we will see the use of "Protected" Acess modifier
   -------------------------------------------

   Syntax of Sub-Class or child class 

   > 1st we write the -Class then child-class-Name,
                       then put :(to specify mode),
                       then Parent Class


    class Child-classname : mode(acess modifier) parent class
                        

-------------------------------------------------------------------

MODES OF INHERITANCE:


Base-Class          public           private        protected
member Acessifier 
----------------   ---------        --------         ---------
>public              public         protected         private

>protected         protected        protected         private

>private          Not-Accessible   Not-Accessible   Not-Accessible

-----------------------------------------------------------------------

for public
  
Super-Class              Sub-Class         Outside-Class

Acess modifier           Mode of
property database        Inheritance
----------------         ------------      ---------------
public                  public         >    public

public                  private        >    private

public                  protected      >    private

---------------------------------------------------------------------

for protected
  
Super-Class              Sub-Class         Outside-Class

Acess modifier           Mode of
property database        Inheritance
----------------         ------------      ---------------
protected                public         >   protected

protected                protected      >   protected

protected                private        >   private

------------------------------------------------------------------------

for private
  
Super-Class              Sub-Class         Outside-Class

Acess modifier           Mode of
property database        Inheritance
----------------         ------------      ---------------
private                  public         >  Not-Accesible(NA)

private                  protected      >  Not-Accesible(NA)

private                  private        >  Not-Accesible(NA)


Note: "private attributes of super class cannot be inherited"
        
        or

        we can say private data of any class cannot be inherited
---------------------------------------------------------------------------

protected:
>it is similiar to private, but on one condn 
"our child/derived class can access it "
"it can be accessible by inside own class"
 
        





