/*
#include<iostream> 
using namespace std;

int main(){

    //pointer int is created, and is pointing to some garbage value
    int *p;
    //we can also use int *p=0 insted of int *p as it is Risky..
    //Because it is pointing to memory which does not exist..



    cout<<*p<<endl; 
    //it will give SEGMENTATION-FAULT
}

*/

/*
#include<iostream>
using namespace std;

int main(){

    int i=5;

    //int *p=&i;

    int *p=0;
    p=&i;

    cout<<"address is : "<<p<<endl;
    cout<<"value is : "<<*p<<endl;

    return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main(){

    int i=5;

    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0;
    p=&i;

    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    
    int num=5;
    int a=num;
    a++;

    cout<<num<<endl;//here we have printed num which is as it is so it will print 5
    
    //if we have printed a then the output would have been 6 
}

*/

#include<iostream>

using namespace std;

int main(){

    int num=5;
    int a=num;

    cout<<"before : "<<num<<endl;
    a++;//o/p = num i.e 5

    cout<<"after : "<<num<<endl;

    int *p=&num;
    cout<<num<<endl;// o/p=5
    (*p)++;//5++ i.e. 5+1 =6
    cout<<"before : "<<num<<endl;

    (*p)=(*p)*2;
    cout<<"after : "<<num<<endl;//6*2

    return 0;

}