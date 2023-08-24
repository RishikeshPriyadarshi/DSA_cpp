#include<iostream>
using namespace std;

char getMaxmOccuringChar(string s){
    int arr[26]={0};

    //create an array of count characeters
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        //to lower case
        int number=0;

        number=ch-'a';

        arr[number]++;
    }

    //finding maxm occuring character
    int maxi=-1,ans=0;

    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns=ans+'a';
    return finalAns;
}

int main(){
    string s;
    cin>>s;

    cout<<getMaxmOccuringChar(s)<<endl;
}
/*
TIME COMPLEXITY
   >> The first loop runs till the length of 's' which can be variable 'n'.
       its O(N)

   >> second loop runs 26 timess,it will remain constant so its  O(1)..
    

    so the T.C is O(n)...

SPACE COMPLEXITY

    >>Herer 26 is fixed size and constant space,so value 
      of SPACE COMPLEXITY is CONSTANT SPACE...  

*/

