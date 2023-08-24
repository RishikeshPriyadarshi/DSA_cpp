/*
 if we want block of 5 memmory from heap

 new int[5];//allocation of 5 memory location from heap

 int* arr=new int[5];

 total=8(pointer)+5*4(int)
      =28
*/


//Take 'n' from user and create variable array

#include<iostream>
using namespace std;

//Making a funcn which will give sum of all elements
int getSum(int *arr, int n){
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }/**/

    return sum;
}

int main(){

    //for variable size
    int n;
    cin>>n;

    //creating Dynamic Array
    int* arr=new int[n];//variable size array

    //Taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getSum(arr,n);

    cout<<"Answer is "<<ans<<endl;++



}