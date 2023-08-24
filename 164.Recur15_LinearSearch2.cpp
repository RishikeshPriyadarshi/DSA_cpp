#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<"size of array is : "<<n<<endl;

    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";

    }cout<<endl;
}

bool linearSearch(int arr[],int size,int key){

    print(arr,size);

    //base case
    if(size==0)//when we reach end of the array
    return false;

    if(arr[0]==key){
        return true;
    }

    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);

        return remainingPart;
    }
}

int main(){

    int arr[5]={2,4,6,8,9};
    int size=5;

    int key=10;

    bool ans=linearSearch(arr,size,key);

    if(ans){
        cout<<"present "<<endl;

    }
    else{
        cout<<"not present "<<endl;
    }

    return 0;
}