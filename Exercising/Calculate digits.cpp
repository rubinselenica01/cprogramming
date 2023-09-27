#include <stdio.h>

	int digits(int n){
		
		if(n==0){
			return 0;
	}
		else{
			return digits(n/10)+1;
		}
	}


int main(){
	
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Number %d is %d-digit.",n,digits(n));
	
	return 0;
}
