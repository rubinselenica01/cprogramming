#include <stdio.h>

		int main(void){
			
			const int n=10;
			int v[n],i;
				
			for(i=0;i<n;i++){
			printf("Insert number %d:",i+1);
			scanf("%d",&v[i]);
			}
	
			int sum=0;
			
			for(i=0;i<n;i++){
				sum=sum+v[i];
			}
			printf("The average is %.1f.",1.0*sum/n);
			getchar();
			return 0;
		}
