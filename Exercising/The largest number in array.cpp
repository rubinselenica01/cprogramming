#include <stdio.h>

		int main(void){
			
			int i;
			const int m=10;
			int v[m];
			
			for(i=0;i<m;i++){
				printf("Put the element with index %d:",i+1);
				scanf("%d",&v[i]);
			}
			int max=v[0];
			int position=0;
			for(i=0;i<m;i++){
				
				if(v[i]>max){
						max=v[i];
						position=i+1;
				}
			}
			printf("The largest number is:%d",max);
			printf("\nIts position is:%d",position);
			
			getchar();
			return 0;
		}
