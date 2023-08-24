#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[],int n){
    int minm=INT_MAX;
    
    for(int i=0;i<n;i++){

       minm=min(minm,num[i]);
        //if(num[i]<min){
           // min=num[i];
       // }
    }
    return minm;

}

int getMax(int num[],int n){
    int maxm=INT_MIN;

    for(int i=0;i<n;i++){

       
       maxm=max(maxm,num[i]);
        //if(num[i]>max){
            //max=num[i];
       // }
    }

    return maxm;
}



int main(){

    int size;
    cin>>size;
    
    //we created ann aray and Size will be entered by us ,it means size of an
    //array is variable i.e the size inside the array is variable
    //which is very bad practice 

    //as SIZE is VARIABLE in this case 
    //we should not use Varaible to define array size 

    //int num[size];


    int num[100];  

    //taking input in an array
    for(int i=0;i<size;i++){

        cin>>num[i];

    }

    cout<<"Maximum value is"<<getMax(num,size)<<endl;
    cout<<"Minimum valueis "<<getMin(num,size)<<endl;



}





/*
#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[],int n){
    int min=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;

}

int getMax(int num[],int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

    return max;
}



int main(){

    int size;
    cin>>size;
    
    //we created ann aray and Size will be entered by us ,it means size of an
    //array is variable i.e the size inside the array is variable
    //which is very bad practice 

    //as SIZE is VARIABLE in this case 
    //we should not use Varaible to define array size 

    //int num[size];


    int num[100];  

    //taking input in an array
    for(int i=0;i<size;i++){

        cin>>num[i];

    }

    cout<<"Maximum value is"<<getMax(num,size)<<endl;
    cout<<"Minimum valueis "<<getMin(num,size)<<endl;



}
*/