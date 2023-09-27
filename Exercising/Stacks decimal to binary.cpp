#include <stdio.h>
#include <stdlib.h>
#define MAX 20


int array_stacks[MAX]; 
int top=-1; 

int isFull(){
		
		if(top==MAX-1)	
		return 1;
		
		else 
		return 0;
	}
	
	int isEmpty(){
		if(top==-1)
		return 1;
		
		else 
		return 0;
		
	}
	
	void push(int data){
   	
   	if(isFull()){
   		
   		printf("Stack overflow!");
   		return;
   		
	   }
			top=top+1;	
			array_stacks[top]=data;
	
		}	
		
	int pop(){
		int value;
		if(isEmpty()){
			printf("Stack underflow!");
			exit(1);
		}
		
		value=array_stacks[top];
		top=top-1;
		
		return value;
	}	
	
	
	void decimal2binar(int decimal){
		
		while(decimal!=0){
			push(decimal%2);
			decimal=decimal/2;
		}
	}

	void print(){
		int i;
		if(isEmpty()){
			printf("Stack underflow!");
			exit(1);
		}
		
		while(!isEmpty()){
			printf("%d",pop());
		}
	}

int main(){
	
	int decimal;
	printf("ENter the number to convert:");
	scanf("%d",&decimal);
	decimal2binar(decimal);
	print();
	
	return 0;
}
