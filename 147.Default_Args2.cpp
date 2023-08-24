/*
  >Can we do something like ,even if we don't the argument,
  print the full array?

  ..Means we want to make 'start' argument inside the funcn print
    OPTIONAL,
    Means if someone pases the argument print a/c to that
    and if not print the whole array...

> so when give 'start=0',it will print accordingly
    
*/

#include<iostream>
using namespace std;

void print(int arr[],int n, int start=1){
    //int start to know from where to print
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){

    int arr[5]={1,4,7,8,9};
    int size=5;

    print(arr,size,3);

    cout<<endl;

    print(arr,size);//here we have made the start arg optional

    return 0;


}

/*
    NOTE:Always take care about a condn,default argument will always 
         start from the right-most parameter...
         
         mean it will always start from RIGHTMOST
         after that only if we want we can make other parameters
         in left default args

         i.e void print(int arr[],int n=0. int start=0)


    it will go from right to left

    if we want to make all the parameters Default, we can make it..

*/