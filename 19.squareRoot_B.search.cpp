//finding square root of number using binary searc

#include<iostream>
using namespace std;

//int binarySearch(int n){
int sqrtInteger(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;

    long long int ans=-1;

    while(s<=e){

        long long int square=mid*mid;

        if(square==n){
            return mid;
        }

        if(square<n){
            ans=mid;
            s=mid+1;
        }

        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision,int tempSol){

    double factor=1;
    double ans=tempSol;

    for(int i=0;i<precision;i++){

        ////dividing 1/10 will become 0.1 and after further division of 0.1
        // will become on 0.01 and so on.......
        factor=factor/10;            //now we want to add the factor(baar baar) to sqr(to check the precision)


                        //now we want to add the factor(baar baar) to sqr(to check the precision)


        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int tempSol=sqrtInteger(n);
    cout<<"Answer is"<<morePrecision(n,3,tempSol)<<endl;

    return 0;
}