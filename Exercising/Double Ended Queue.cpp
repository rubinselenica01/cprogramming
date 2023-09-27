#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int deque[MAX];
int front=-1;
int rear=-1;

		int isFull(){
			if((front==0 && rear==MAX-1)||(front==rear+1)){
				return 1;
			}
			return 0;
		}
				
		void EnqueueFront(int data){
			if(isFull()){
				printf("Queue overflow!\n");
				exit(1);
			}
			if(front==-1){
				front=0;
				rear=0;
			}
			else if(front==0){
				front=MAX-1;
			}
			else
				front--;
				
			deque[front]=data;
		}
		
		void EnqueueRear(int data){
			if(isFull()){
				printf("Queue overflow!\n");
				exit(1);
			}
			if(front==-1){
				front=0;
				rear=0;
			}
			else if(rear==MAX-1){
				rear=0;
			}
			else{
				rear++;
			}
			deque[rear]=data;
		}
		
		int isEmpty(){
			if(front==-1){
				return 1;
			}
			return 0;
		}
		
		int DequeueFront(){
			if(isEmpty()){
				printf("Stack underflow!\n");
				exit(1);
			}
			int number=deque[front];
			
			if(front==rear){
				front=-1;
				rear=-1;
			}
			
			else if(front==MAX-1){
				front=0;
			}
			
			else {
			front++;
			}
			
			return number;
		}
		
		int DequeueRear(){
			if(isEmpty()){
				printf("Queue underflow!\n");
				exit(1);
			}
			int number1=deque[rear];
			
			if(rear==0){
				rear==MAX-1;
			}
			
			else if(rear==front){
				rear=-1;
				front=-1;
			}
			
			else{
				rear--;	
			}
			
			return number1;
			
		}
		
		int Peek(){
			if(isEmpty()){
				printf("Queue underflow!\n");
				exit(1);
			}
			return deque[front];
		}
		
		void Print(){
			if(isEmpty()){
				printf("Queue underflow!\n");
				exit(1);
			}
			int tmp=front;
			if(front<=rear){
				while(tmp<=rear){
					printf("%d ",deque[tmp]);
					tmp++;
				}
			}
			else{
				while(tmp<=MAX-1){
					printf("%d ",deque[tmp]);
					tmp++;
				}
				tmp=0;
				while(tmp<=rear){
					printf("%d ",deque[tmp]);
					tmp++;
				}
			}
			printf("\n");
		}

		int main(){
			
			int choice, data;
			
			while(1){
				printf("1. Insert at front\n");
				printf("2. Insert at rear\n");
				printf("3. Delete from front\n");
				printf("4. Delete from rear\n");
				printf("5. Print the first element\n");
				printf("6. Print all elements\n");
				printf("7. EXIT\n");
				printf("Enter the choice:");
				scanf("%d",&choice);
				
						switch (choice){
									case 1:
											printf("Enter the element to be added in the queue:");
											scanf("%d",&data);
											EnqueueFront(data);
											printf("Element is added successfully in queue!\n");
											break;
									case 2:
											printf("Enter the element to be added in the queue:");
											scanf("%d",&data);
											EnqueueRear(data);
											printf("Element is added successfully in queue!\n");
											break;
											
									case 3:
											data=DequeueFront();
											printf("Deleted element is %d.\n",data);
											break;
									case 4:
											data=DequeueRear();
											printf("Deleted element is %d.\n",data);
											break;
									case 5:
											printf("The first element of the queue is %d.\n",Peek());
											break;
									case 6:
											Print();
											break;
									case 7:
											exit(1);
									default:
											printf("Please select a valid option!\n");
											break;				
									
						}
			}
			
			
			
			getchar();
			return 0;
			
			
			return 0;
		}
