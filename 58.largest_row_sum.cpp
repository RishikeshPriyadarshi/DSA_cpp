#include<iostream>
#include<climits>
using namespace std;

bool isPresent(int arr[][3],int target,int row,int col){
    
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){

            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

//to print row-wise sum
void printSum(int arr[][3],int row,int col){

    for(int row=0;row<3;row++){
        
        int sum=0;
        
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        }

        cout<<sum<<" ";
    }

    cout<<endl;

}

int largestRowSum(int arr[][3],int row, int col){
    
    //now we will intalize maximum element(maxi) with INT_MIN i.e

    int maxi=INT_MIN;

    int rowIndex=-1;

    for(int row=0;row<3;row++){
        
        int sum=0;
        
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        }

        if(sum>maxi){
            maxi=sum;

            rowIndex=row;
        }
    }

    cout<<"the maxm sum is maxi :"<<maxi<<endl;
    return rowIndex;
}

int main(){

    //create 2-d array
    int arr[3][3];

    cout<<"enter the elements "<<endl;

    //taking input row wise
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }

        cout<<endl;
    }


    cout<<"printing the array "<<endl;
    //print
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the target element :"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"target is found "<<endl;
    }
    else{
        cout<<"target is not found "<<endl;
    }

    printSum(arr,3,3);

    cout<<"max row is at index :"<<largestRowSum(arr,3,3);

    return 0;
}