// We have to find the intersection of elements and return the common elements in output
// if the intersection is not found return -1 in output
// and it is given that elements are sorted in non decreasing order

/*#include<iostream>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n,vector<int> &arr2,int m){

    vector<int> ans;
    for(int i=0;i<n;i++){
        int element=arr[i];

        for(int j=0;j<m;j++){


            if(element==arr2[j]){
                ans.push_back(element);//this is method to put it in vector instead of printing
                arr2[j]=-12345//INT_MIN;//WE have updated the element after the intersection so that if there
                //same element in vector then it shouuld not clash withh othher no while mapping

                break;
            }
        }
    }
    return ans;
}
*/

// lets do this in more optimise way
// in the question it says both the arrays have been sorted in non decreasing order
// have we used this property of array? NO
// so we want o sort
/*
vector<int> findArrayIntersection(vector<int> &arr1, int n,vector<int> &arr2,int m){

    vector<int> ans;
    for(int i=0;i<n;i++){
        int element=arr[i];

        for(int j=0;j<m;j++){

            if(element<arr2[j])//This will simply just end our loop when we found just one greater elemnt
            break;

            if(element==arr2[j]){
                ans.push_back(element);

                break;
            }
        }
    }
    return ans;
}

//here it is alo not most optimised becuse we have made loop inside loop so the time complexity increases
//so it will not run in 1ms..we have to think of other approach

*/

// Here we have used 2 pointr approach

#include <bits/stdc++.h>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> vt{1, 2, 3, 4, 5};
    vector<int> vt2{4, 5, 6, 7, 8, 9};
    vector<int> temp;
    temp = findArrayIntersection(vt, vt.size(), vt2, vt2.size());
    for (auto i : temp)// for(int i=0;i<temp.size();i++){cout<<temp[i]}
    {
        cout << i << " ";
    }
    
}
