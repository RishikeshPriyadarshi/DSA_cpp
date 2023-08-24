#include<iostream>
using namespace std;

int main(){

	int n=5;
	cin>>n;

	int row=1;
	
	while(row<=n){
		//star=n-row+1;
		
		int space=n-row;
		
		while(space){
			
			cout<<" ";
			space=space-1;
	
	
		int col=1;
		
		while(col<=row){
			int star=n-row+1;
			cout<<"*";
			
			
			col=col+1;
		}
		
		
			
		}	
		cout<<endl;
		
		row=row+1;
	}			
	
}			
	
