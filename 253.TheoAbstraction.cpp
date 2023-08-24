            ABSTRACTION
            ------------
  "Implementation Hiding" called Abstraction

  Means:
  "Required Things willl be Shown"
  "no need to show Everything"...

  Real Life Ex:
  ------------

  when we send an e-mail to someone ,
  we just clic send, and we get the sucess msg:

  what happpens when we click send , how data is transmitted 
  over network to recipient is hidden from us
  (because it is irrelevant to us)...



  ___________________________________________________________

Data Abstraction can be achieved in two ways:

 .) Abstraction using classes

 .) Abstraction in header files.
          

_____________________________________________________________

Abstraction using classes: 
-------------------------
    An abstraction can be achieved using classes. 
    A class is used to group all the data members 
    and member functions into a single unit
    by using the access specifiers. 
    A class has the responsibility to determine which 
    data member is to be visible outside and which is not.

Abstraction in header files: 
---------------------------------
 An another type of abstraction is header file.
  For example, pow() function available is used to 
  calculate the power of a number without actually knowing
   which algorithm function uses to calculate the power.
    Thus, we can say that header files hides a
    ll the implementation details from the user.

____________________________________________________________  

Access Specifiers Implement Abstraction:
-----------------------------------------


.)Public specifier: When the members are declared as 
  public, members can be accessed anywhere from the program.


.)Private specifier: When the members are declared as
  private, members can only be accessed only by the member functions of the class.


__________________________________________________________

Advantages Of Abstraction:

>Implementation details of the class are protected
 from the inadvertent user level errors.

>A programmer does not need to write the low level code.

>Data Abstraction avoids the code duplication, 
  i.e., programmer does not have to undergo the 
 same tasks every time to perform the similar operation.

>The main aim of the data abstraction is to reuse 
 the code and the proper partitioning of the code across
 the classes.

>Internal implementation can be changed without affecting
 the user level code.
