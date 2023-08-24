#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	
	cout<<"printing count from 1 to n"<<endl;
	
	for(int i=1;i<=n;i++){ //intialization;condition;inc/dec
		cout<<i<<endl;
	}
	
}		

// we can do this too

/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	
	cout<<"printing count from 1 to n"<<endl;
	
	int i=1;
	
	for(;;){ 
		if(i<=n){ //condition
		cout<<i<<endl;
		}
		
		else{
			break;//break gets us outside of current loop making repetition end
		}	
		i++;
	}
}

*/
