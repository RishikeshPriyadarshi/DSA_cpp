//find unique elements
//we will xor the two elements which are same or repeating then after XORin output will be 0
//for example a^a=0


#include<iostream>
using namespace std;

int findUnique(int *arr,int size){
    int ans=0;

    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }

    return ans;
}