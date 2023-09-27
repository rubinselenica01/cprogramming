#include <stdio.h>

		int sum(int n){
			if(n==0){
				return 0;
			}
			else{
				int m=n%10;
				n=n/10;
				return sum(n)+m;
			}
			
			
		}
		
		

		int main(){
			
			int n;
			
			printf("Enter the number:");
			scanf("%d",&n);
			
			printf("Sum of every digit of number %d is %d.",n,sum(n));
			
			return 0;
		}
