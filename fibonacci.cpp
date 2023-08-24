//print fibonacci numbers  0,1,1,2,3,5,8,13,21......

#include<iostream>

using namespace std;

int main(){
	int n;
	
	cout<<"enter the value of n"<<endl;
	cin>>n;
	
	int a=0;
	int b=1;
	
	cout<<a<<" "<<b<<" ";
	
	
	for(int i=1;i<=n;i++){          
		int nextnumb=a+b;
		cout<<nextnumb<<" ";
		
		
		a=b;
		b=nextnumb;
	}
}		
