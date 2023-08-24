/*#include<iostream>
using namespace std;

int main(){

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // ptrinting or output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
*/
/*

#include<iostream>
using namespace std;

int main(){

    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;   
    
}
*/

//for searching

#include<iostream>
using namespace std;

bool isPresent(int arr[3][4],int target,int row,int col){

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            
            if(arr[row][col]==target){
                return 1;
            }
        }
    }

    return 0;

}

int main(){
    
    int arr[3][4];

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
        cout<<endl;
    }

    cout<<"enter the element to search :"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }



    return 0;
}