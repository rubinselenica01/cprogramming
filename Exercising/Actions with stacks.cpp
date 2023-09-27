#include <stdio.h>
#include <stdlib.h>
#define MAX 4


int stacks_array[MAX]; 
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
	
	int peek(){
		if(isEmpty()){
			printf("Stack underflow\n");
			exit(1);
		}
		return stacks_array[top];
	}

   void push(int data){
   	
   	if(isFull()){
   		
   		printf("Stack overflow!");
   		return;
   		
	   }
			top=top+1;	
			stacks_array[top]=data;
	
		}	
		
	int pop(){
		int value;
		if(isEmpty()){
			printf("Stack underflow!");
			exit(1);
		}
		
		value=stacks_array[top];
		top=top-1;
		
		return value;
	}	
	
	void print(){
		int i;
		if(isEmpty()){
			printf("Stack underflow!");
			exit(1);
		}
		for(i=top;i>=0;i--){
			printf("%d\n",stacks_array[i]);
			
		}
	}

		int main(){
			
			int choice,data;
			
			while(1){
				printf("\n");
				printf("1.Push\n");
				printf("2.Pop\n");
				printf("3.Print the top element\n");
				printf("4.Print all the elements of the stack\n");
				printf("5.Quit\n");
				printf("Please enter your choice:");
				scanf("%d",&choice);
				
				switch(choice){
					case 1:
						printf("Enter the element to be pushed:");
						scanf("%d",&data);
						push(data);
						break;
					case 2:
						data=pop();
						printf("Deleted element is %d.",data);
						break;	
					case 3:
						printf("The topmost element is %d.",peek());
						break;
						
					case 4:
						print();
					break;
					
					case 5:
						exit(1);
						
					
					default:
					printf("Wrong choice!\n");	
				}
			}
			
			
			return 0;
			
		}
