/*
 Note:In Function Array goes as Pointer...

     and its benefit is that we can send a part of array

*/

#include <iostream>

using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
int getSum(int arr[],int n){
    //"cout<<inside(the real update) : "<<endl;


    //we can Update the Value
    *p=*p+1;
}

//int getSum(int arr[],int n){ //both below and in this line are same

    int getSum(int *arr,int n){

    cout<<endl<<"Size : "<<sizeof(arr)<<endl;//output will be parameter will return size of int*
    //insted of int[]
    //it says that the one we r passing here it will give the size of pointer 
    //not the size of array

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    return sum;

}

int main()
{
    /*
    int value = 5;

    int *p = &value;

   // print(p);

    cout << "Before : " << *p << endl;

    update(p);
    cout << "After : " << *p << endl;

    */



    int arr[5]={1,2,3,4,5};
    
    cout<<"Sum is : "<<getSum(arr,5)<<endl;

    return 0;
}

//Here the output will be returned 8 (the size of single pointer)as Size but it is 20

/*Note:The reason is when we pass an ARRAY in Funcn/Method it Doesn't Pass
       array, it Passes POINTER...
*/
 