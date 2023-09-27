#include <stdio.h>


int main(){
	
	int v[10]={};
	
	for(int i=0;i<10;i++){
		printf("Put the value %d:",i+1);
		scanf("%d",&v[i]);
	}
	
	int *ptr=v;
	int sum;
	int *sh=&sum;
	
	for(int i=0;i<10;i++){
		*sh=(*sh)+(*ptr+i);
	}
	
	printf("Sum is %d.",*sh);
	
	return 0;
	
	
}
