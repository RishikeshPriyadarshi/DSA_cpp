//code studio

#include<iostream>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){

    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr,int n, int m){
    //s is start here
    int s=0;
    
    int sum=0;

    int ans=-1;
    
    for(i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int mid=s+(e-s)/2;

    while(s<e){
        if(isPossible(arr,n,m,mid)){

            ans=mid;
            e=mid-1;

        }
        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){

}

/*

#include <bits/stdc++.h> 

//we have to write the funcn of isPosssible soln

bool isPossible(vector<int> arr, int n, int m, int mid){

    //intially take the the count  of the student and sum of page
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        //here arr[i] is current no of page
        if(pageSum+arr[i]<=mid){
            
            //if the condn satisfies then we will just add the 
            //pageSum with the current page i.e.

            //pageSum here indicates the no. of pages is allocated to students
            pageSum+=arr[i]; 
        }
        //if pageSum becomes greater than given max then we try to 
        //allot to the next stuent
        //means we will increase the studentCount

        else{
            studentCount++;
            //now we will check if the studentCount has become greater
            //as we a/q we r having only 2 students we have to check
            //if it has become 3 or what and if it is greater then will
            //return false

            if(studentCount>m || arr[i]>mid){

                return false;
            }

            pageSum=arr[i];

        }
        
    }

    return true;


}

int allocateBooks(vector<int> arr, int n, int m) {
    int s=0;

    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    //here e is end..
    int e=sum;//here e(end) will be sum of all

    int mid=s+(e-s)/2;

    int ans=-1;

    //using the B.Search logic
    while(s<=e){

        //for possible soln we store the ans and go to the left part
        //i.e.leftpart(minimum):e=mid-1;

        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        
        //when it is not possible then no solution exists so,

        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;


    }

    return ans;
}


*/