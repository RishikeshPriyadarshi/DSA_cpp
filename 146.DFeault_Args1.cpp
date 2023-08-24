#include<iostream>
using namespace std;

void print(int arr[],int n, int start){
    //int start to know from where to print
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){

    int arr[5]={1,4,7,8,9};
    int size=5;

    print(arr,size,0);


}

/*
  >Can we do something like ,even if we don't the argument,
  print the full array?

  ..Means we want to make 'start' argument inside the funcn print
    OPTIONAL,
    Means if someone pases the argument print a/c to that
    and if not print the whole array...

*/


//  Read about constant variable