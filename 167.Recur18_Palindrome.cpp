/*
  Q.palindrome
    - when the string and its reverse are equal then it is palindrome
   

     abbccbba

     Approach 1:
           Take a string and reverse of string and compare it
            if both r equal then it is palindrome...


     Her we have taken extra memory of O(n).
     n is length of string ......>SPACE-COMPLEXITY

     our Complexity will also be O(n) ,because 
     we r traversing the string---->TIME-COMPLEXITY 


     Approach 2:
             put 2 pointers on the string, then compare it
             if both r equal,
             then,
             i++
             j--

           if not eqaul then print not a palindrome,

           when we continue this and reach i>j
           then its palindrome         

*/

#include<iostream>
using namespace std;

//bool checkPalindrome(string& str,int i,int j){
bool checkPalindrome(string& str,int i,int j){

    //base case
    if(i>j)
    return true;
    
    //ek case solve kro baki recursion kr lega
    if(str[i]!=str[j])
    return false;

    //if it is true then recursion sambhal lega
    //dono ko age badhake
    else{
        //Recursive call
        return checkPalindrome(str,i+1,j-1);
    }

}

int main(){
    string name="rishi";
    cout<<endl;

    //bool isPalindrome=checkPalindrome(str,0,name.length()-1)
    bool isPalindrome=checkPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout<<"its a palindrome "<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}