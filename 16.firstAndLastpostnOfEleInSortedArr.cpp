#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;//////

        }
        else if(key>arr[mid]){//Right me jao

            start=mid+1;



        }
        else if(key<arr[mid]){//left me jao

            end=mid-1;

        }

        mid=start+(end-start)/2;
    }
    return ans;
    
}

int lastOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;////

        }
        else if(key>arr[mid]){//Right me jao

            start=mid+1;



        }
        else if(key<arr[mid]){//left me jao

            end=mid-1;

        }

        mid=start+(end-start)/2;
    }
    return ans;
    
}


int main(){

    int even[5]={1,2,3,3,5};
    cout<<"First occurence of 3 is at Index:"<<firstOccurence(even,5,3)<<endl;
    cout<<"Last occurence of 3 is at Index:"<<lastOccurence(even,5,3)<<endl;
}

/*

Total Number of Occurence can be found by using formula

Total no. of occurence =(last index-first index)+1

*/