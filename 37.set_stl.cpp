/*
First thing about SET is that ,all the Unique elements are
stored in the set

...Means if we have put 5 times 5 ,5 will appear only once
in the set.It store the every element only ONCE.
which means EVERY Element should be UNIQUE

>>How it is implemented?
By using BST
..IF we have already included an element ,we cannot modify
it afterwads,either we place it or delete it,Only two things
are available.

..There is no modification.The elements are returned in the 
SORTED ORDER,when start taking elements,it will come in 
sorted order.

These are some speciality of SETS


>>If we talk about UNORDERED SETS,the diffrence is that 
SET is SLOWER than the UNORDERD SET
and when we implement UnOrdred set the answer comes in 
Random Order.


*/

#include<iostream>
#include<set>

using namespace std;

/// @brief 
/// @return 
int main(){

    set<int> s;

    /*
    Here the complexity of 'insret' is O(log n) if we have
    studied Binary Search then we alaready know the reason

    */

    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(3);
    s.insert(6);
    s.insert(6);
    s.insert(5);
    s.insert(5);



    for(auto i:s ){
        cout<<i<<endl;
    }cout<<endl;


    //we will put the iterator from outside

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"Check whether elmt5 avaialable or not :"<<s.count(5)<<endl;


    /*
    Funcn "find", if we get the element i.e.if the elmt
    exists then it returns the iterator
    */

   set<int>::iterator itr=s.find(5);//it will return the iterator of 5

    /*
    //*t is used to print the iterator
   //verifying the returned iterator
   cout<<"Value present at itr:"<<*it<<endl;
   */

  for(auto it=itr;it!=s.end();it++){

    cout<<"Value present at itr:"<<*it<<" ";
  }cout<<endl;

}

/*
NOTE:Here INSERT,FIND,ERASE and COUNT,the Complexity of
     all these FUNCNS are O(log n)...

     >>Other than that BEGIN,SIZE and EMPTY all these 
     have Complexity of O(1)...
*/