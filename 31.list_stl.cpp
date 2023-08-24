/*When are talking about list,its implementation occurs due to the 
doubly linked lists..

>>By the use of doubly linked list,List STL has been made...

>>So the double-linked list, is direct acess  possible in it just 
like vector,array we used to find squqre bracket to find index?,
 can we use  '.at' operation to find?...


.....>THE ANSWER IS NO

 suppose we have to find the 4th element then we have to travel to feach there,
 it's not like we wrote 4 and we can directly reach it,no it can't
 happen...we have to traverse to reach there then only we can acess 
 the element...

  NOTE:The time coplexity of erase is O(1) because as we have to 
       go to each element to delete it...
*/

/*
#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }


    cout<<"size of list\t"<<l.size()<<endl;

}

*/


//if we want to copy the above list into new one,then


#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    //Here we are printing 100 5 times in new list
    list<int> n(5,100);
    cout<<"Printing new list n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;//it is for the new line

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }


    cout<<"size of list\t"<<l.size()<<endl;

}
