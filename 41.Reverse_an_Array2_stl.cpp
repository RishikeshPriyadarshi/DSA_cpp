#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){

    int start=0,end=v.size()-1;
    //int end=v.size()-1;

    while(start<=end){
        swap(v[start],v[end]);

        start++;
        end--;

    }

    //as vector got reversed return v

    return v;
}

void print(vector<int> v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}

int main(){

    vector<int> v;

    v.push_back(11);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);

    vector<int> ans = reverse(v);


    cout<<"Printing an Reverse Array"<<endl;
    print(ans);

    
    return 0;
}