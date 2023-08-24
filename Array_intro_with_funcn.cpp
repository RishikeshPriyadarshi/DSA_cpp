#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
         cout<<arr[i]<<",";
    }

    cout<<"printing is done"<<endl;
}

int main(){

    //declare
    int number[15];
    
    printArray(number,15);


    int second[3]={5,7,11};
     
    printArray(second,3);

    int third[15]={2,7};
     
    printArray(third,15);


    int fourth[10]={0};
    
    printArray(fourth,10);

    int fifth[10]={1};
    int n=10;

    printArray(fifth,10);

    int fifthSize=sizeof(fifth)/sizeof(int);
    cout<<"size of fifth"<<fifthSize<<endl;


    char ch[5]={'a','b','c','d'};
    cout<<ch[3]<<endl;
   
   cout<<"printing the array"<<endl;
   
   //print the array
   for(int i=0;i<5;i++){
    cout<<ch[i]<<" ";
   }
    cout<<"printting is done"<<endl;

    double firstDouble[5];
    float firstFloat[6];
    bool  firstBool[1];



    cout<<endl<<"Everything is fine"<<endl<<endl;



    
}