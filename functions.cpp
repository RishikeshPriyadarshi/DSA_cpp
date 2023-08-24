/*#include<iostream>
using namespace std;

//power is a function which gives the answer is of int type
//return type is int
//and function power contains two arguments int a and int b

//inside function name of variables can be anything

int power(int num1,int num2){
    int ans=1;

    for(int i=1;i<=num2;i++){
        ans=ans*a;
    }

    return ans;
}


int main(){
    int a, b;
    cin>>a>>b;

   int answer=power(a,b);
    cout<<"answer is "<<answer<<endl;

    return 0;
}
*/
#include<iostream>
using namespace std;

int power(){

    int a,b;
    cin>>a>>b;
    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){

    int answer=power();
    cout<<"answer is "<<answer<<endl                                            ;
    return 0;                  

    
}















/*#include<iostream>
using namespace std;
int main(){
    //pow(a,b)

    int a,b;

    cin>>a>>b;

    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }

    cout<<"answer is "<<ans<<endl;
}*/