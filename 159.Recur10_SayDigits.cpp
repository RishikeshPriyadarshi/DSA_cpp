/*
  Say Digits

  i/p---->412

  in output it should be

  o/p--> four one two
*/

#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){

    //base case
    if(n==0)
    return;

    //processing

    int digit=n%10;
    n=n/10;

    //cout<<arr[digit]<<" ";

   //Recursive call  (Bacha hua number print kara do)
   sayDigit(n,arr);
   cout<<arr[digit]<<" ";







}

int main(){

    string arr[10]={"zero", "one", "two","three",
                    "four","five","six","seven","eight","nine"};

    int n;
    cin>>n;

    cout<<endl<<endl<<endl;
    sayDigit(n,arr);
    cout<<endl<<endl<<endl;


    return 0;
}