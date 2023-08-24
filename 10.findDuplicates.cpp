//duplicate means atleast once we will get thee elment  in the array
//ND the elements from n to n-1
//By bruteforce method we can count the every elemnt and get the frequency of elements 
//we will have  set of elements from 1,2,3....,x,n-1
//For XORING we will use these 1,2,3,4,5,.....x,..n-1-,x with prev above set of elements
//and we have to find x ,we can find that by applying XOR as it will cancel all upto n-1 and we will get x
//after all the elements get cncelled by xoring we will get 0 and xooring  with x we will get x
#include<iostream>
using namespace std;

int findDuplicate(vector<int> &arr){

    int ans=0;
    //XORING all the elements
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    //Xoring elements from 1 to n-1
    for(int i=0;i<arr.size();i++){
        ans=ans^i;
    }

    return ans;
}