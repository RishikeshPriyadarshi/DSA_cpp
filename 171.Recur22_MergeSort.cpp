#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid= s+(e-s)/2;

    //length of first arry after divion left wala
    int len1=mid-s+1;

    //right wala array
    int len2=e-mid;


    //now we will create the 2 arrays
    int *first=new int[len1];
    int *second=new int[len2];

    //now copy value of left side of orignal array to new left array
    //we will copy it using loop
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    //now copy value of right side of orignal array to new right array
     mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }


    //now merge this 2 sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<<len1 && index2<<len2 ){
        
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]= second[index2++];
        }

    }

    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];

    }

    while(index2<len2){
        arr[mainArrayIndex++]= second[index2++];
    }





}

void mergeSort(int arr[],int s,int e){

    //base case
    if(s>=e)
    return;


    int mid=s+(e-s)/2;


    //left part sort karna hai array ka fter division with mid
    mergeSort(arr,s,mid);

    //right part sort karna hai
    mergeSort(arr,mid+1,e);

    //no both part(left and right) r sorted
    //we will merge them
    //so merge ke liye ek merge funcn bana lenge
    merge(arr,s,e);
}

int main(){

    int arr[5]={2,5,1,6,9};
    int n=5;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}