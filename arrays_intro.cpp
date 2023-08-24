//here we are using brute force
//here we are not using function

#include<iostream>
using namespace std;

int main(){
    //declare

    int number[15];

    //accesing an array
    cout<<"value at 1 index"<<number[1]<<endl;

    //initalising an array

    int second[3]={5,7,11};

    //acessing an element

    cout<<"value of 2 index "<<second[2]<<endl;


    int third[15]={2,7};

    int n=15;
    cout<<"printing the array"<<endl;

    //print the array

    for(int i=0;i<n;i++){
        cout<<third[i]<<",";
    }
    
    //intalising all locvations with 0
    int fourth[10]={0};
    n=10;
    cout<<"printing the array"<<endl;

    //print the array

    for(int i=0;i<n;i++){
        cout<<fourth[i]<<endl;
    }

    //intalising  all loactions with 1[not possible with below line]
    int fifth[10]={1};
    n=10;

    for(int i=0;i<n;i++){
        cout<<fifth[i]<<" ";
    }

    cout<<endl<<"Everything is fine"<<endl<<endl;
}