//taking input row wise
#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

    //taking input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //ptrinting or output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}

/*
    //suppose if we want colum wise input

    #include<iostream>
    using namespace std;

    int main(){
        int arr[3][4];

        //taking input column wise
        for(int i=0;i<4;i++){
            for(int i=0;i<3;i++){
                cin>>arr[j][i];
            }
        }

        //print 
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";

            }

            return 0;
        }

        
    }
*/