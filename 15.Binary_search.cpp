#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    //int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    //he condiion for   WHILE LOOP  was fine untill start<=end,
    //everything becomes mess when start>end, Then we won't be able to compare

    while(start<=end){

        if(arr[mid]==key){
            return mid;//return index if mid==key and index is mid
        }

        //go to right wala part when key is greater 
        if(key>arr[mid]){
            start=mid+1;

        }

        else{//when key<arr[mid] i.e when key is less  than arrr[mid] search in left part
            end=mid-1;
        }

        //mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenIndex= binarySearch(even,6,12);
    cout<< "Index of 12 is "<< evenIndex << endl;

    int oddIndex= binarySearch(odd,5,20);
    cout<<" Index of 20 is "<<oddIndex<<endl;

    return 0;
}