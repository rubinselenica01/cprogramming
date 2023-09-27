#include <stdio.h>

		void insert_array(int v[],int n){
			
			int i;
			
			for(i=0;i<n;i++){
				printf("Put the element with index %d:",i+1);
				scanf("%d",&v[i]);
			}
		}
		
		
		int control(int v[],int n,int x){
			int i;
			for(i=0;i<n;i++){
				if(v[i]==x)return 1;
				
			}
			return 0;
		}
		
		int main(void){
			
			int x;
			const int n=10;
			int vector[n];
			
			insert_array(vector,n);
			
			printf("Put your value to search:");
			scanf("%d",&x);
			
			if(control(vector,n,x)==1){
				printf("Your value is in the list!");
			}
			else{
				printf("Your value is in the list!");
			}
			
			return 0;
		}
