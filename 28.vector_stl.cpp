/*VECTOR is an Dynamic array ,just like an array evereything is stored
in contiguous memory location,same way it is followed in vector as well

what is diffrence then?

>>When our vector gets full ,it means ,suppose the size of the vector
is 4 we filled 4 elements,now when we try to fit 5th element,in that case
Vector will double its size..

and how is that possible?
>it will create the new vector whose size will be double than the 
prevous one,it will copy all the elements from the prev vector
and then it will dump the old vector..

>>WE can also use 'SHRINK TO FIT' opertaion to decrease

note:RandomAccess is also posssible like we did in array a[i] or
whatever index we want to put..




*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    /*whenever we create new vector its size is 0
    we can check its capacity
    size means currntly how many elements does it consists
    capavity means how much memory has been allocated*/

    cout<<"Size->"<<v.capacity()<<endl;//Here the cpacity will be
    //0 beacuse we hve not put any elemnt in the vector yet


    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Size->"<<v.size()<<endl;


    cout<<"Element at 2nd Index\n"<<v.at(2)<<endl;


    /*In case of front and back array,FRONT used to return the 
    1st element,and BACK used to return last element
    
    */

   cout<<"first/front\t"<<v.front()<<endl;
   cout<<"last/back\t"<<v.back()<<endl;


   /*
   we can do pop  back 

   just like push back we put 3 at back

   pop_back will throw out that 3
   
   */
  cout<<"before pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }

  /*
  When we talk about clearing the vector,it means emptying the 
  vector totally..
  we have to renmember one thing that when we clear vector,we use
  clear operetion in that case vector size is 0 but capacity isn't

  */

 cout<<"before clear size "<<v.size()<<endl;
 v.clear();
 cout<<"After clear size "<<v.size()<<endl;




}


