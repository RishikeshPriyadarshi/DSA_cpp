
/*
 When we attened marriage,there we have many plates,we pick
 up the top plate,we don't pick up the latter one

 we pick up the top plate,the standing behind will also do
 the same....what does it mean?
..>>Means whenever those plates are kept, they are kept on 
top of each other,which means that was kept at 1ST is 
at BOTTOM and it will be Used LAST...

NOTE: In case of STACK there is concept of LAST in 
      FIRST out...

      means the one which that goes last will be picked 
      out first...  


*/

#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;//stack of string type

    s.push("Rishi");
    s.push("kesh");
    s.push("darshi");


    //Here the output of top element will be kumar
    //because we have put it in the end,beacuse the one which
    //goes in end,comes out first
    cout<<"Top Element :"<<s.top()<<endl;


    //now if we want to remove(pop) kumar then
    s.pop();
    cout<<"Top Element :"<<s.top()<<endl;


    cout<<"Size of stack :"<<s.size()<<endl;


    cout<<"Empty or not :"<<s.empty()<<endl;
}