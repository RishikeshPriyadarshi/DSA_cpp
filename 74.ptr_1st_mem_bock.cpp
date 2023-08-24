/*
#include<iostream>

using namespace std;

int main(){

    int arr[10];

    cout<<"address of first Memory Block is : "<<arr<<endl;

    cout<<"address of first memory block is : "<<&arr[0]<<endl;//means
    //address of location zero



    return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main(){

    int arr[10]={0};

    cout<<"address of first Memory Block is : "<<arr<<endl;

    cout<<arr[0]<<endl;//it will print value of 0th index

    cout<<"address of first memory block is : "<<&arr[0]<<endl;//means
    //address of location zero

    cout<<*arr<<endl;


    return 0;

}

*/

#include<iostream>

using namespace std;

int main(){

    int arr[10]={2,5,6};

    cout<<"address of first memory block is : "<<arr<<endl;
    cout<<arr[0]<<endl;//it will print value in the block at 0th address
    cout<<"adrssss of first memory block is : "<<&arr[0]<<endl;

    cout<<"Value at first memory location : "<<*arr<<endl;
    cout<<"value at 1st memory location//at 0th index i.e 2+1 : "<<*arr+1<<endl;

    cout<<"value at 1st Location : "<<*(arr+1)<<endl;//it will print val at 1st index

    cout<<"value at 0th loation + 1 : "<<(*arr)+1<<endl;


}

