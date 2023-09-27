#include <stdio.h>
#include <stdlib.h>


		struct QueueNode{
			int data;
			struct QueueNode* next;
		}* front=NULL,* rear=NULL;
		
		
		void Enqueue(int value){
				
				struct QueueNode* ptr=(struct QueueNode*)malloc(sizeof(struct QueueNode));
				
				if(ptr==NULL){
					printf("No space!\n");
					exit(1);
				}
				
				ptr->data=value;
				ptr->next=NULL;
			
				if(rear==NULL){
					front=ptr;
					rear=ptr;
				}
				else{
					rear->next=ptr;
					rear=ptr;
				}
					
				               }
		int isEmpty(){
			if(rear==NULL){
				return 1;
			}
			return 0;
		}
		
		int Dequeue(){
			
				if(isEmpty()==1){
					printf("Queue Underflow!\n");
					exit(1);
				}
				struct QueueNode* ptr=front;
				
				int number=ptr->data;
				front=front->next;
				if(front==NULL){
					rear=NULL;
				}
				free(ptr);
				ptr=NULL;
				return number;
		}
		
		int Peek(){
				if(isEmpty()==1){
					printf("Stack underflow!");
					exit(1);
				}
				return front->data;
		}
		
		void Print(){
			
			if(isEmpty()==1){
				printf("Queue Underflow!\n");
				exit(1);
			}
			printf("Queue:\n");
			struct QueueNode* ptr;
			ptr=front;
				while(ptr!=NULL){
					printf("%d\n",ptr->data);
					ptr=ptr->next;
				}
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
