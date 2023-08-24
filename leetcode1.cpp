//subtract the product and sum digits of an number
#include<iostream>
int main(){
class solution{
public:
	int subtractProductAndSum(int n){
	
		int product=1;
		int sum=0;
		
		while(n!=0){
			int rem=n%10;
			
			product=product*rem;
			sum=sum+rem;
			
			n=n/10;
		}	
		int ans=product-sum;
		return ans;
	}
	
	return 0;		
};	
}
