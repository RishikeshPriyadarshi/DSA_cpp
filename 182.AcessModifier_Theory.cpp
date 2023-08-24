ACCESS Modifer

   there r 3 types of Access Modifier

   1.PUBLIC
   2.PRIATE 
   3.PROTECTED

So , in short ,whatever data members(or properties) in the 
class, where we can acess them:
     we will know it by Access Modifier

------------------------------------------------------------

NOTE: " By Default our ACCESS-Modifier in class is Private"

____________________________________________________________

1.Public

if we made our data member public :

class Hero{
    public:
    int health;
    char level;
};

This means all things under public, e can acess them anywhere,
"inside or outside the class..."

___________________________________________________________________

2.Private

if we made our data member private :

class Hero{
    private:
    int health;
    char level;
    
    //this behaviour or funncn can be accessed inside the class
    void print(){

        cout<<level<<endl;

    }
};

This means all things under private, we can acess them
"only inside the class only"

if we having any funcn(or BEHAVIOUR) ,i.e. void print(),
this funcn an acess this level, this will not give error,
instead of being private..

--------------------------------------------------------------

3.Protected

