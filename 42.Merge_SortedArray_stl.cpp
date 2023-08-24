/*
#include<iostream>
#include<vector>

using namespace std;

void merge(int arr1[],int n, arr2[],int m, arr3[] ){

    //now we will see t2 point approach to reverse an array

    
    //One pointer in i  pointing to arr1[], and another pointer j is pointing 
    //to arr2[]...

    //now we will compare the both elements,whichever is smaller after comparing
    //we will put it into arr3[]... 
    


   int i=0,j=0;
   int k=0;//this variable for 3rd array

   while(i<n && j<m){

        if(arr1[i]<arr2[j]){

            arr3[k]=arr1[i];
            k++;
            i++;


        }

        else{
            arr3[k]=arr2[j];
            k++;
            j++;
            
        }

   }

   //now copy the  element of the first array

   while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;

   }

   //copy remaining elemrnt of 2nd arrray

   while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
    
   }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    //in arr3[] we have to merge the elements

    arr[3]={0};//in starting the elements in arr3[] the elements present it is 0

   //In funcn MERGE we have put the arr, and its size
    merge(arr1,5,arr2,3,arr3);

    print(arr3,8);
}

*/

#include<iostream>
#include<vector>

using namespace std;

void merge(int arr1[],int n, int arr2[],int m, int arr3[]){

    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }

        else{
            arr3[k++]=arr2[j++];
        }
    }

    //copy 1st array ke element ko
    while(i<n){
        arr3[k++]=arr1[i++];
    }

    //copy krdo array ke remaining element ko
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

void print(int arr_ans[],int n){
    for(int i=0;i<n;i++){
        cout<<arr_ans[i]<<" ";
    }

    cout<<endl;
}

int main(){

    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[3]={0};

    merge(arr1,5, arr2,3, arr3);

    print(arr3,8);

    
}



