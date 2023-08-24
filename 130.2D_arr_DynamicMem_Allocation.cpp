/*
  NOTE: We have to understand that 
  Whenever we are allocating soomething in the HEAP
  always keep in mind "when our tasks get completed we have-
  to clear memory  manually"..


*/

#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    
    //syntax of intalizing 2-D array with Dynamic Allocation
    int** arr= new int*[n];

    for(int i=0;i<n;i++){

        arr[i]=new int[n];
    }// 2-D array creationnis completed

    
    //Now Taking Input in 2-D array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    //Taking Output
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }




}