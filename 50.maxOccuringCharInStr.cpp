/*
    for example we have given a string 'test'
    o/p-t has occured 2 times
        e has occured 1  time
        s has occure  1  time

        so the maximum is t which has occured 2 times 
        so our answer is t....


    >>so there are total 26 alphabets and we have to store 26 alphbets

      so it can be from a-z or A-Z ,it can be either of them..

      ,..No problem we will assume both as same,we will just DO '+1'..


      so if we made array of [26] of int TYPE and we started applying 'count '
      function to it...how we do it?

      ..>>can we assume 'a' as 0 and 'z' as 25
          and we have done one-to-one mapping, we assumed as 'A','B'....'Z'

          SO if we have lowercase character then we wil SUBTRACT 'a' from charcter
          and we will get the number from there
          lowercase..>ch-'a';,..>number
          by using that number we will inctease the count
          i.e. arr[number]++

          and Similarly for UPPERCASE
*/

#include<iostream>
using namespace std;

char getMaxOccuringChar(string s){
    int arr[26]={0};


    //create an array of count of chaarcters..
    for(int i=0;i<s.length();i++){
        char ch=s[i];


        int number=0;
        //this case shows the lower case
        if(ch>='a' && ch<='z' ){
            number=ch-'a';


        }
        else{//this case shows the upper case

            number=ch-'A';

        }

        arr[number]++;

    }
    //find maximum occuring character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns='a'+ans;
    return finalAns;
}

int main(){
    string s;
    cin>>s;

    cout<<getMaxOccuringChar(s)<<endl;
}
   
