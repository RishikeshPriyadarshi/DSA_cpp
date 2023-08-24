#include<iostream>

using namespace std;

int main(){
    char ch='q';
    cout<<sizeof(ch)<<endl;//It is of 1 byte

    char* c=&ch;
    cout<<sizeof(c)<<endl;//It is of 8 byte

    return 0;
}

// In case of character ch it will store 9 byte
 // 8 byte in STACK(Static Allocation)
 //1 byte is sored in HEAP(Dynamic Allocation)