#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	system("COLOR E1");
	int n=5;
	int a[n]={0,2,5,4,1};
	
	int *pp=a;
	int tmp;
	
	for(int i=0;i<n-1;i++){
		
		for(int j=i+1;j<n;j++){
			
			if(*(pp+i)<*(pp+j)){
				
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				
			}
		}
		
	}
	
	
	for(int i=0;i<n;i++){
		
		printf("%d\t",*(pp+i));
	}
	printf("\n");
	
	printf("Second biggest number  %d !",*(pp+1));
	
	
	return 0;
	
}
