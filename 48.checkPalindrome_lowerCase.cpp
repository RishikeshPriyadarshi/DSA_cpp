#include<iostream>
using namespace std;

 int toLowerCase(char ch){

    if (ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;

    }
 }

 bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){

        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }

    return 1;
 }

 void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
        
    }

    
 }

 int getLength(char name[]){
    int count=0;

    for(int i=0;name[i]!='\0';i++){

        count++;
    }

    return count;
 }

 int main(){
    char name[20];

    cout<<"Enter the name :";
    cin>>name;

    cout<<"Your name is :";
    cout<<name<<endl;

    int len=getLength(name);
    cout<<"Length is :"<<len<<endl;


    reverse(name,len);
    cout<<"your name is :";
    cout<<name<<endl;


    cout<<"Check palindrome or not :"<<checkPalindrome(name,len);

    return 0;

 }


 /*


 #include<bits/stdc++.h>

bool checkPalindrome(string s){

    int start=0;
    int end=s.length();

    while(start<end){
        while(start<end&&!isalnum(s[start])){
            start++;
        }

        while(start<end&&!isalnum(s[end])){
            end--;
        }

         if(toLower(s[start])!=toLower(s[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
  
        
    }

    return 1;
    
}
*/



