/*
Suppose we have string s=a,b,c,b,a
if we do the REVERSE of the string then also it will be SAME
that is called PALINDROME

s=a,b,c,b,a
reverse_s=a,b,c,b,a

both are same so it is palindrome...

So we can say if we have string and REVERSE of that string generates the
SAME string then it is PALINDROME...

*/

#include<iostream>
using namespace std;


/*Here we have pased a charcater,if any aharacter cones it will check if it is 
in already lowerCase then it will return in the lower case..

And if it is in upperCase then first it will convert to lowercase and then return

*/
char toLowerCase(char ch){

    /*
    if it is in already lowerCase then it will return in the lower case..

   And if it is in upperCase then first it will convert to lowercase and then return 
    into LowerCase
    */
   if(ch>='a'&&ch<='z'){
    //return as it is
    return ch;
   }

   else{//when the letter is in UpperCase
    char temp=ch-'A'+'a';
    return temp;
   }

}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(a[s]!=a[e]){
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

    cout<<"the name is :";
    cout<<name<<endl;

    int len=getLength(name);
    cout<<"Length :"<<len<<endl;

    reverse(name,len);
    cout<<"Your name is :";
    cout<<name<<endl;

    cout<<"Palindrome or not :"<<checkPalindrome(name,len)<<endl;

    cout<<"Character is :"<<toLowerCase('b')<<endl;
    cout<<"Character is :"<<toLowerCase('A')<<endl;
}