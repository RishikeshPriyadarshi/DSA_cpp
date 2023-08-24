#include<iostream>
using namespace std;

void most_occured_number(int nums[],int size){
    int maxCount=0;
    cout<<"\n most occured number:";
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++)
        if(nums[i]==nums[j])
        count++;
        if(count>maxCount){
            maxCount=count;

        }

        for(int i=0;i<size;i++){
            count=1;
        


        for(int j=i+1;j<size;j++)
        if(nums[i]=nums[j])
        count++;

        if(count==maxCount)
            cout<<nums[i]<<endl;
        
        }    


    }

}

int main(){

    int nums[]={4,7,8,9,10,8,0,45};

    int n=sizeof(nums)/sizeof(nums[0]);

    cout<<"original array:";
    for(int i=0;i<n;i++)
    cout<<nums[i]<<" ";

    most_occured_number(nums,n);

    return 0;
}