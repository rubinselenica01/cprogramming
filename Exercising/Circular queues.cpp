#include <stdio.h>
#include <stdlib.h>
#define MAX 4

	int queue[MAX];
	int front=-1;
	int rear=-1;
	
	int isFull(){
		if((front==0 && rear==MAX-1)||(front==rear+1)){
			return 1;
		}
		return 0;
		
				}
	
	int isEmpty(){
		if(front==-1){
			return 1;
		}
		return 0;
	}
	
	void Enqueue(int data){
		if(isFull()==1){
			printf("Queue overflow!\n");
			exit(1);
		}
		if(front==-1){
			front=0;
		}
		if(rear==MAX-1){
			rear=0;
		}
		else{
			rear=rear+1;
		}
		queue[rear]=data;
	}
	
	int Dequeue(){
		if(isEmpty()==1){
			printf("Queue underflow!\n");
			exit(1);
		}
		int number=queue[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		if(front==MAX-1){
			front=0;
		}
		else{
			front++;
		}
		return number;
	}
	
	int Peek(){
		if(isEmpty()==1){
			printf("Queue underflow!\n");
			exit(1);
		}
		return queue[front];
	}
	
	void Print(){
		if(isEmpty()==1){
			printf("Queue underflow!\n");
			exit(1);
		}
		int temp=front;
		
		if(front<=rear){
			while(temp<=rear){
				printf("%d ",queue[temp]);
				temp++;
			}
		}
		else{
			while(temp<=MAX-1){
				printf("%d ",queue[temp]);
				temp++;
			}
			temp=0;
			while(temp<=rear){
				printf("%d ",queue[temp]);
				temp++;
				}
			}
			printf("\n");
		}



	int main(){
		
			int choice, data;
			
			while(1){
				printf("1. Insert\n");
				printf("2. Delete\n");
				printf("3. Print the first element\n");
				printf("4. Print all elements\n");
				printf("5. EXIT\n");
				printf("Enter the choice:");
				scanf("%d",&choice);
				
						switch (choice){
									case 1:
											printf("Enter the element to be added in the queue:");
											scanf("%d",&data);
											Enqueue(data);
											printf("Element is added successfully in queue!\n");
											break;
									case 2:
											data=Dequeue();
											printf("Deleted element is %d.\n",data);
											break;
									case 3:
											printf("The first element of the queue is %d.\n",Peek());
											break;
									case 4:
											Print();
											break;
									case 5:
											exit(1);
									default:
											printf("Please select a valid option!\n");
											break;				
									
						}
			}
		
		getchar();
		return 0;
	}
