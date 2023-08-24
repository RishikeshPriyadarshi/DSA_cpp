#include<iostream>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int mid){

    int cowsCount=1;
    int lastPosition=stalls[0];

    for(int i=0;i<stalls.size();i++){
        
        if(stalls[i]-lastPosition>=mid){
            cowsCount++;

            if(cowsCount==k){
                return true;
            }

            lastPosition=stalls[i]
        }

        
    }

    return false;
}

int aggressiveCows(vector<int> &stalls,int k){
    sort(stalls.begin(),stalls.end());

    int s=0;

    int maxi=-1;

    int ans=-1;

    for(i=0;i<stalls.size();i++){

        maxi=max(maxi,stalls[i]);
    }

    int e=maxi;

    int mid=s+(e-s)/2;


    while(s<e){

        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;

        }

        else{
            e=mid-1;
        }

        s=s+(e-s)/2;
    }

    return ans;
}

int main(){

    return 0;
}