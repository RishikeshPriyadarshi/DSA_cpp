#include<iostream>
using namespace std; 

int main(){

    int arr[5]={1,2,3,4,5};
    
    char ch[6]="abcde";

    cout<<arr<<endl;

    //attention here
    cout<<ch<<endl;//will print entire string


    char *c=&ch[0];
    cout<<c<<endl;//will print entire string i.e. abcde

    //what happens if string does not encounter null character
    char temp='z';
    char *p=&temp;
    cout<<p<<endl;

    //in this case it will print till it encounters null character..
}