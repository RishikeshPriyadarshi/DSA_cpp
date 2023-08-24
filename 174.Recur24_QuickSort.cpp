//Space complexity is O(n)..

//Time Complexity is O(nlogn)--->Best

//Worst case O(N^2)
#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    
    //we ill take pivot whatever is in staring or 1st index
    int pivot=arr[s];


    /*
    ab hame count krna hai kitne number chote hai pivot se

    iske liye hm ek loop chal denge pivot element se ek aage
  */
   int cnt=0;
   for(int i=s+1;i<=e;i++){

        if(arr[i]<=pivot){
            cnt++;
        }

   }

   /*
     upar se hmne count nikal lia to hume right place pata 
     chal gaya pivot ka

     so hmne pivot ka jo sahi place hai use naam de diya 
     pivotIndex
   */
  int pivotIndex=s+cnt;
  //we will place pivot at ryt postion by swapping
  swap(arr[pivotIndex],arr[s]);


  //ab hme left or right wala part pivot ka smbhalna hai
  //so hm i or j lnge(pointers) start or end pe respectively
  int i=s;
  int j=e;
  while(i<pivotIndex && j>pivotIndex){

    //jb tk koi element pivot se chota hai incremen krte raho
    while(arr[i]<=pivot){
        i++;
    }

    while(arr[j]>pivot){
        j--;
    }

    //agr ye dono upar wala case nahi hai to swap krdo
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
    }
  }

  return pivotIndex;


}

void quickSort(int arr[],int s,int e){

    //base case
    if(s>=e){
        return;
    }
    
    //calling partition function
    int p= partition(arr,s,e);

    //sorting left par
    quickSort(arr,s,p-1);

    //sorting right part
    quickSort(arr,p+1,e);




}

int main(){

    int arr[5]={2,4,1,6,9};
    int n=5;
    
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

}