#include <stdio.h>

int factorial(int n){
			
			if(n==1){
				return 1;
			}
			
			else{
				return factorial(n-1)*n;
			}	
			
		}


int main(){
	
	int number;
	
	printf("Enter the number :");
	scanf("%d",&number);
	int l=number;
	
	int sum=0;
	
	int a=number%10;
	while(a>0){
		sum=sum+factorial(a);
		number=number/10;
		a=number%10;	
		
	}
	if(sum==l){
		printf("%d is strong number",l);
       }
	else{
		printf("%d is not strong number!",l);
	}
	
	
	return 0;
}
