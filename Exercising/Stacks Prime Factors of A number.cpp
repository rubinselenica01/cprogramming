#include <stdio.h>
#include <stdlib.h>
#define MAX 20


		int stacks_array[MAX];
		int last=-1;
		
		
		
			int isFull(){
		
		if(last==MAX-1)	
		return 1;
		
		else 
		return 0;
	}
	
	int isEmpty(){
		if(last==-1)
		return 1;
		
		else 
		return 0;
		
	}
	
	
		void push(int data){
   	
   			if(isFull()){
   		
   		printf("Stack overflow!");
   		return;
   		
	   }
			last=last+1;	
			stacks_array[last]=data;
	
		}
		
		int pop(){
		int value;
		if(isEmpty()){
			printf("Stack underflow!");
			exit(1);
		}
		
		value=stacks_array[last];
		last=last-1;
		
		return value;
	}		
		
void PrimeFactors(int number){
	
	int i=2;
	while(number!=1){
		while(number%i==0){
			push(i);
			number=number/i;
			
		}
		i++;
	}
	
	while(last!=-1){
		printf("%d ",pop());
	}
	
}



int main(){
	
	int number;
	printf("Enter a number!");
	scanf("%d",&number);
	
	
	PrimeFactors(number);
	
	return 0;
}
