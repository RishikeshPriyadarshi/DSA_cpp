/*
Ques. I/P- "abcde"
      

      O/P- "edcba"

      basically we have to reverse the string , we will solve it using recursion


*/

//in this question we have taken 2 pointers i and j
// we can modify this by using only one pointer

#include<iostream>
using namespace std;
//void reverse(string str,int i,int j){//i is starting j is ending
void reverse(string& str,int i,int j){//i is starting j is ending
 //string is passed s refernce variable  //****IMPORTANT
  cout<<"call recieved for "<<str<<endl;

    //base case
    if(i>j)
    return;

    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    reverse(str,i,j);

}

int main(){

    string name="rishi";

    cout<<endl;

    reverse(name,0,name.length()-1);

    

    cout<<endl;

    cout<<"reversed string is "<<name<<endl;


}