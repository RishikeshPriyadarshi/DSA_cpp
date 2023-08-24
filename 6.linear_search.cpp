//In LINEAR search we do search/go/traverse in single direction

#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if (arr[i]==key){
        return 1;//returning 1 means true i.e when value is found
        }

        
    }

    return 0;//returning zero means when false i.e. when value is not found

}


int main(){

    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

    //whether 1 is present it or not
    //>>so to search 1 make a funcn callled bool which will tell yes or no



    //making the array dynamic
    cout<<"enter the element to be searched for"<<endl;
    int key;
    cin>>key;

    bool found=search(arr,10,key);

    if(found){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is absent"<<endl;
    }

    return 0;

}