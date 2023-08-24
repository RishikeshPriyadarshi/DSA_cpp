/*
 solving bubble sort using rtecursion
*/

#include<iostream>
using namespace std;

void sortArray(int *arr,int size){
    
    /*
      base case will be , if there is no element or 0 element
      there is no need o sort it
    */

   //base case
   if(size==0 || size==1){ //means already sorted
    return;
   }

   //solve 1 case baki recursion solve kr lega
   //ye case largest element ko end me pahucha dega
   for(int i=0;i<size;i++){

    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
   }

   //RECURSIVE CALL
   sortArray(arr,size-1);



}

int main(){

    int arr[5]={2,5,1,6,9};

    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}