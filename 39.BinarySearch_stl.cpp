/*
The condition for B.Search is that our ARRAY/VECTOR
in which we are going to alter it ,we r going to apply
our logic should be SORTED
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    //now we have to apply the B.Serch on the elements we pushed

    //suppose we want to search 4
    //4 isn't prsent here so it should definetely be FALSE
    //So it will return 0 which means false

    cout<<"Finding 4:"<<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<"finding 5:"<<binary_search(v.begin(),v.end(),5)<<endl;
    
    /*
    Now we want to find the Iterator of this particular
    Element so that we can traverse from there and so
    we just check it what is the scene..

    */



   //we can also find the lower bound

   cout<<"lower bound for 5 :"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

   //we can also find upper bound

   cout<<"upper bound for 4:"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;


   int a=3;
   int b=5;

   //printing the Max of both
   cout<<"max of (a,b) :"<<max(a,b)<<endl;

   //printing the min of both
   cout<<"min of (a,b) :"<<min(a,b)<<endl;

   //swapping
   swap(a,b);
   cout<<"a After swap:"<<a<<endl;
   cout<<"b After swap:"<<b<<endl;


   //reversing the string

   string abcd="abcd";
   reverse(abcd.begin(),abcd.end());
   cout<<"reverse string is : "<<abcd<<endl;

   //rotating the vector
   rotate(v.begin(),v.begin()+1,v.end());
   cout<<"after rotating vector :"<<endl;

   for(auto i:v){
    cout<<i<<" "<<endl;
   }cout<<endl;

   /*
   //Sorting the vector

   Q.Sort funcn is ok but What is the Working behin it?
   >>It is based on INTRO-SORT
   q.what is INTRO-SORT?
    >>It is the combination of 3 algorithms
      Quick sort,Heap Sort and Merge Sort using these 3
      algorithms INTRO-SORT is made..

   */
    

    sort(v.begin(),v.end());
    cout<<"After Sorting The vector :"<<endl;

    for(auto i:v){
        cout<<i<<" "<<endl;
    }
}
