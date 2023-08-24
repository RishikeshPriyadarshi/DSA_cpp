#include<iostream>

using namespace std;

int main(){

    int arr[10]={23,122,41,67};

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    

}



/*
  NOTE: When we create an array ,address is assigned to memory and we cannot 
        reassign it....

        for ex:
        we cannot say that arr is 923,now assign to 523,NOT POSSIBLE , we can't do that..
        
*/