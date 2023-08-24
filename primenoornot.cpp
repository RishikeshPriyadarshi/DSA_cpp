//if we have to chheck 7 is prime or not we use to divide it by all numbers from 1 to n except 1 and n, if it is get divided by the numbers then it is prime number
//else it is not a prime number
//in short ,if we get n%i==0(where i is any number between 1 to n) then it is not prime number



#include<iostream>
using namespace std;

int main(){

	int n;
	
	cout<<"enter the value of n"<<endl;
	cin>>n;
	
	bool isprime=1;//bool is the datatype which can take value either true(1) or false(0)
	
	
	for(int i=2;i<n;i++){
	        
	
                //rem=0, Not a prime number	
		if(n%i==0){
			//cout<<"not a prime number"<<endl;
			isprime=0;
			
			break;
		}	
		
		
		
		/*else{
			//rem is not 0 means maybe prime
			
		}	
		*/	
		
	}
	
	if(isprime==0){
		cout<<"is a prime number"<<endl;
	}
	else {
		cout<<"is not a prime number"<<endl;
	}	
	
}	


