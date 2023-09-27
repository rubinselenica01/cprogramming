#include <stdio.h>
#include <conio.h>

		int main (void){
			
			int n;
			printf("This program prints n elements of Fibonacci Series.\nFormula:En=E(n-1)+E(n-2)\n");
			printf("Input the number of elemens:");
			scanf("%d",&n);
			
			int k1=0,k2=1;
			
			printf("\n0,1,");
			
			int k3,i;			
			for(i=3;i<=n;i++){
				
				k3=k1+k2;
				printf("%d,",k3);
				
				k1=k2;
				k2=k3;
				
			}
			
			getch();
			return 0;
			
			
		}
