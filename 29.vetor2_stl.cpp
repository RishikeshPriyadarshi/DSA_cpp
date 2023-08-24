//when the size of the vector is known

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    //here 5 is size of the vector  and 1 means intalize all the 
    //elements inside the vector  with 1...means all the five
    //elements will be intalized with 1
    vector<int> a(5,1);

    //suppose we have to make the vector where a shuld be copied 

    vector<int> last(a);//so the last vector will be created and all
    //the elements of 'a' are there 

    cout<<"print a"<<endl;
    for(int i:last){
        cout<<i<<" \t";
    }
    
    cout<<"Size->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Size->"<<v.size()<<endl;


    cout<<"Element at 2nd Index\n"<<v.at(2)<<endl;


    
   cout<<"first/front\t"<<v.front()<<endl;
   cout<<"last/back\t"<<v.back()<<endl;


   
  cout<<"before pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }

  

 cout<<"before clear size "<<v.size()<<endl;
 v.clear();
 cout<<"After clear size "<<v.size()<<endl;




}


