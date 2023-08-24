#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr){
    int ans=0;

    //xoring all array elements
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    //XOR  from n to n-1
    for(int i=1;i<arr.size();i++){
        ans=ans^i;


    }
    return ans;
}

int main(){
    std::vector v1 {1,2,3,4,5,6,7};
    
    cout<<"duplicates"<<findDuplicate<<endl;
}