/*
  
  >>we can pass the parameter as refernce variable in a function

void update(int& n){

}


>> we can also create reference variable like this also

NOTE:This is very BAD PRACTICE

int& update(int n){

  int a=10;
  int &ans=a;

  return ans;

}

.. now the Question ill there be any problem with it?
 ..>the answer is yes

    so if we see carefully,there is mistake being made,
    the ans variable we made, we returned it,
    but we know is that num is a local variable of int& funcn(int a)
  


  It is very BAD PRACTICE to write because,

  if we see carefully, "num is local variable to block(i.e.funcn)"

  refernce variable we made i.e int& ans has also life span 
  upto the region of funcn only, after that it is no acessible,
  it becomes __DECIMAL_DIG__


  so when the block int& funnc gets over, Memory gets Cleared
  there is nothing remains to pass.
  Therefore it is very bad practise to do,we will get warning
  during compiling...


*/

//This is the program for "Return By Reference"

#include<iostream>
using namespace std;

int& func(int a){
    int num=a;
    int& ans=num;

    return ans;
}

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){
    int n=5;
    cout<<"Before"<<n<<endl;

    update2(n);
    cout<<"after"<<n<<endl;

    func(n);
}