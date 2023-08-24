/*DEQUE is also known as DOUBLY ENDED QUEUE

What is it?
>>it means we can apply push and pop, insertion and deletion at 
  the beginning and the end..

  means if we want to do the insertion from front then we can do it,
  if we want to do it from the back then we can do it as  well

  and similarly for removal


 NOTE:So here in DEQUE ,like in case of VECTOR  and array data was
 stored in the contiguous  memory location, here it does not happen
 instead we have multiple fixed static array and taracking place that
 our data is  stored in which array.

 simply we can say that insertion nd deletion can take place at both end


 it is dynamic too ,here too  the size can increase very eaisly


*/

#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    //now we have to put some element in deque
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }

    //now we have to pop

    /*d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    */

   /*d.pop_front();
   cout<<endl;
   for(int i:d){
    cout<<i<<" ";
   }
   */

  //we have print the element of 1st  index then

  cout<<"Print 1st index element\t"<<d.at(1)<<endl;

  cout<<"front\n"<<d.front()<<endl;
  cout<<"back\n"<<d.back()<<endl;

  cout<<"Empty or not\t"<<d.empty()<<endl;//it will return 0  means
  //false as it is not empty


  /*cout<<"before erase\t"<<d.size()<<endl;
  d.erase();//here is some error because here we have to show,
  //from where till we want to delete a single element or delte
  // a  range.....

  cout<<"after erase\t"<<d.size()<<endl;
  */



 //The size becomes 0 after erase,but our max size,max means the 
 //memory allocated to deque, the starting and ending amount remains same
 
 cout<<"before erase\t"<<d.size()<<endl;
 d.erase(d.begin(),d.begin()+1);
 cout<<"after erase\t"<<d.size()<<endl;


  


}