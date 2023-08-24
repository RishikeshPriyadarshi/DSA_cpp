#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){

    //base case
    if(size==0)//jb array ker last me p[ahuch jayenge]
        return false;

    //now will solve 1 case ,rest will be done by recursion

    if(arr[0]== key){
        return true;
    }

    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }

    
}

int main(){


    int arr[5]={3,5,2,1,6};
    int size=5;

    int key=2;

    bool ans=linearSearch(arr,size,key);

    if(ans){
        cout<<"present "<<endl;
    }
    else{
        cout<<"not present "<<endl;
    }


    return 0;
}