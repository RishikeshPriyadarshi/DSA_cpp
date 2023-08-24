#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    p=p+1;
}


int main(){

    int value=5;
    int *p=&value;

    print(p);


    cout<<"Before Update "<<p<<endl;

    update(p);
    cout<<"After Update"<<p<<endl;
    return 0;
}
//Here the value will remain same for before and after,the value will not get UPDATED

/*
   What is happening?

   >>here we have main() function and one is update() function..

   Now we have craeated a Pointer 'p' which has values ,suppose 123,which is an address
   stored in it
   And we printed this  p  in "Before"..


   >>Next we called the update function and passed 'p'

   So one 'p' is crated here also, pass by value, it consists 123,

   Now a/c to funcn, in line 9, p=p+1,that is block,the block is same
   but inside it has become 124(123+4=127 in case of integer)..

   we know the real step ,then we came back and then we printed "after" and value
   of 'p' is 123

  Note:If we have printed inside the update function ,then we have got the implemented value..
  
*/