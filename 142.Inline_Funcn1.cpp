/*
 There is stack space, main() is in starting, it is containing
 a and bwhich is containing a,b respectively.
 When we call the funnc at line no. 26 then this funcn will get
 entry, where we have again created 'a' and 'b'...
 so here we have allocted a new memory..

 so When we call a new funcn it takes time,and we also used memory
 so performance has definitely reduced


*/

/*
  #include<iostream>
using namespace std;

void func(int a, int b){
    a++;
    b++;
    cout<<a<<" "<< b<<endl;
}
int main(){

    int a=1, b=4;
    func(a,b);


    return 0;

}
  
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a=1, b=2;
    int ans=0;
    
    //Instead of using if-else we cause ternary operator too
    if(a>b){
        ans=a;
    }
    else{
        ans=b;
         
    }
}



*/

#include<iostream>
using namespace std;

int main(){
    int a=1, b=2;
    int ans=0;

    ans=(a>b)? a:b;

    cout<<ans<<endl;

    a=a+3;
    b=b+1;

    ans=(a>b) ? a:b;//it means if a is greater than b than ans is a
                   // if a is not greater than b, that is condn is false
                   //then answer will be b...
    cout<<ans<<endl;               

    return 0;               
}

