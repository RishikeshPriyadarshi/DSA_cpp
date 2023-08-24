/*
#include<iostream>
using namespace std;

int main(){
    int r=5;
    int area=3.14*r*r;
    cout<<"Area is "<<area<<endl;

    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int r=5;
    double area=3.14*r*r;
    cout<<"Area is"<<area<<endl;

    return 0;
}





#include<iostream>
using namespace std;

int main(){
    int r=5;
    double pi=3.14;
    
    double area=pi*r*r;
    cout<<"Area is "<<area<<endl;

    return 0;
}

*/

#include<iostream>
using namespace std;

#define PI 3.14
//It means if PI is written anywhwere, it will get replaced by
//3.14 before compilation,then it will be compiled..
/*
  now we do not need to take extra storage and also ther is no need to 
  allocate memory,
  we r replacing it before compile time, it is nott going to change
  
*/

int main(){
    int r=5;
    //double pi=3.14;
    
    double area=PI*r*r;
    cout<<"Area is "<<area<<endl;

    return 0;
}