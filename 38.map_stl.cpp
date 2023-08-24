/*
MAP is a data structure in which the values are stored in
the form of KEYS....

...Suppose our KEY  is Love and VALUE is SCORPIO,
so Love is pointing towards Scorpio

NOTE:All our KEYS are UNIQUE and One Key will POINT to
     Only ONE VALUE.

     Means Love will point to Scorpio Only.

>>It can happen that Love is pointing to Scorpio and 
  Kumar is also ppointing to Scorpio,so this val can be same


>>But this can't happen that Love is Pointing to Scorpio
  and Love is also Pointing to verna..

  SAME KEY will NOT POINT 2 VALUES....
*/

#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> mp;

    /*
    Here in LHS 1,2,13 are KEYS and in RHS kumar,love,
    singh are VALUES..
    */

   //one way to insert value into keys
    mp[1]="kumar";
    mp[2]="Love";
    mp[13]="singh";


    //Other way to insert
    mp.insert({5,"Bheem"});//we use curly braces to insert


  

    for(auto i:mp){

        cout<<i.first<<endl;//it will print 1,2,13 in case 
        //of ordered map,in case of unorderd map order will be random


    }cout<<endl;


    cout<<"Before erase:"<<endl;

    for(auto i:mp){
      cout<<i.second<<endl;
    }cout<<endl;


    cout<<"finding 13:"<<mp.count(13)<<endl;
    cout<<"is -13 present:"<<mp.count(-13)<<endl;

    mp.erase(13);
    cout<<"After erase:"<<endl;

    for(auto i:mp){
      cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;


    //FIND returs the Iterator of that Element

    auto it=mp.find(5);
    
    for(auto i=it;i!=mp.end();i++){

      cout<<(*i).first<<endl;//iterator means all the
      //element present after that we used in find() including
      //itself(i.e 5)

    }


}

/*
In case of we have to only give the key and we can ERASE that


>>To INSERT,ERASE,FIND,COUNT the Complexity all these
  Functions are in case of MAP is O(log n)...




NOTE:Here in case of ORDERED MAP the Complexity of search is O(log n)
 because it is searched using RANDOM BLACK TREE or through 
 BALANCE TREE..

 >>In case of UNOREDRED MAP ,it is Implemneted by the
 HASH TABLE,There the Complexity of SEARCH is O(1)..
*/