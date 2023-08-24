// Creating 2-D Array when no. of rows and cols are diffrent

//to make 2-D array we will take rows

#include<iostream>
using namespace std;

int main(){

    int row;
    cin>>row;

    int col;
    cin>>col;

    //Creating 2-D array
    int** arr= new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //Taking input in 2-D array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
            cin>>arr[i][j];
        }
    }

    //Taking Output
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
    //Releasing Memory
    for(int i=0;i<row;i++){
        delete arr[i];
    }

    delete []arr;

    return 0;

}




/*
  NOTE: We have to understand that 
  Whenever we are allocating soomething in the HEAP
  always keep in mind "when our tasks get completed we have-
  to clear memory  manually"..

*/