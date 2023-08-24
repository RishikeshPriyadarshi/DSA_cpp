#include<iostream>
using namespace std;

int main(){
    int arr[]={11,21,31,41};
    int *ptr=arr++;//This is not possible becuse we try to update in symbol table,
                   //which is not possible,so it will throw error
    cout<<*ptr<<endl;


    return 0;
}