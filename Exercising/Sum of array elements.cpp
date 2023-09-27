#include <stdio.h>

		int main(void){
			
			int i;
			const int m=10;
			int v[m];
			
			for(i=0;i<m;i++){
				printf("Put the element with index= %d:",i+1);
				scanf("%d",&v[i]);
			}
			
			int sum=0;
			for(i=0;i<m;i++){
				sum+=v[i];
			}
			printf("The sum of your elements is=%d",sum);
			
			getchar();
			return 0;
			
		}
