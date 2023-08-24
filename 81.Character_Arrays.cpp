#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";//we will be have 6 characters as we will be having null
    //charcter as well, when we put a sring like "abcde",it ends with null char

    cout<<arr<<endl;//here it will print address

    cout<<ch<<endl;//here it will just print content of i.e. abcde

    char *c=&ch[0];
    cout<<c<<endl;//it will also print the entire string abcde



    return 0;
}

/* So we came to know that for integer and character arrays, the COUT Function
    is DIFFRENTLY Implemented


*/