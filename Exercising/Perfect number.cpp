#include <stdio.h>

    int sum(int n,int x){
    	if(x==1)
    			return 1;
    	if(n%x==0)
    			return x+sum(n,x-1);
    	else
    			return sum(n,x-1);
	}


int main(){
			int n;
			
			printf("Enter the number:");
			scanf("%d",&n);
			
			if(shuma(n,n/2)==n){
				printf("\nPerfect number\n");
			}
			else{
				printf("\nNot a perfect number\n");
			}
		
	return 0;
}
