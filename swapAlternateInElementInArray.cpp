#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    //size is total length of an array
    for(int i =0;i<size;i=i+2){ //i is index here
        if(i+1,size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
int evenarr[8]={5,2,9,4,7,6,1,0};//8 is length of array
int oddarr[5]={11,33,9,76,43};//5 is length of array

swapAlternate(evenarr,8);
swapAlternate(oddarr,5);


printArray(evenarr,8);
cout<<endl;
printArray(oddarr,5);

}