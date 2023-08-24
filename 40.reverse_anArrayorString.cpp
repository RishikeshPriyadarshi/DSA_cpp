//Reversing array or string using bruteforce

#include<iostream>
using namespace std;

/*
    function to  reverse array from start to end
*/
void revreseArray(int arr[],int start, int end){
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;

            start++;
            end--;

        }
    }
        //Utility function to print array

    void printArray(int arr[],int size){

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }cout<<endl;
    }

    int main(){

        int arr[]={1,2,3,4,4,5,6};

        int n=sizeof(arr)/sizeof(arr[0]);

        printArray(arr,n);

        revreseArray(arr,0,n-1);

        cout<<"Reversed array is :"<<endl;

        printArray(arr,n);

        return 0;
    }




