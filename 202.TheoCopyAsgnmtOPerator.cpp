COPY ASSIGNMENT OPERATOR 

// suppose 2 objects already crerated i.e. hero1 and hero2
 
 Hero a(10,'C');


 Hero b(20,'B')


//now we have written 
a=b;//then

//if we write a=b then content of b will be copied in a
//in sort
a.health=b.health;
a.level=b.level;
a.name=b.name;

//wht we have said or done is ,"Object is created already"
//after that we want a copy ,then we wiil 
//use copy assignment(=) an copy in this(line 16,17,18) way..




