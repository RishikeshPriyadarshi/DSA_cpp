#include <iostream>
using namespace std;

void merge(int *arr,int s, int e)
{

    int mid = (s + e) / 2;

    // length of left side array i.e. 1st array
    // and right side array i.e. 2nd array

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // now we will make 2 new array
    //2 memory first and second is ynamically allocated
    int *first = new int[len1];
    int *second = new int[len2];

    // copy arrays
    int mainArrayIndex = s; // first array is starting from s
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i]= arr[mainArrayIndex++];
    }

    // now merge 2 sorted array
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }

    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
    
    //delete the dynamically allocated mmemory to 
    //prvnt memory leak
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

   int mid = (s + e) / 2;

    // left part Sort karna hai
    mergeSort(arr, s, mid);

    // right wala part sort karna  hai
    mergeSort(arr, mid + 1, e);

    // ab dono left rigt ko merge kr dena hai
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {2, 5, 6, 7, 4};
    int n = 5;

    mergeSort(arr, 0, n - 1);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}