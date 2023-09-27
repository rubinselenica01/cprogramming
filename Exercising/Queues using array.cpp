#include <stdio.h>
#include <stdlib.h>
#define MAX 100 //maksimumi i rradhes

int front=-1, rear=-1;
int queue[MAX];

		int isEmpty(){
			if(front==-1 ||front==rear+1){
				return 1;
			}
			return 0;
		}
		
		int isFull(){
			if(rear==MAX-1){
				return 1;
			}
			return 0;
		}
		
		void Enqueue(int data){
			
			if(isFull()==1){
				printf("Queue Overflow!\n");
				exit(1);
			}
			
			if(front==-1){
				front=0;
			}
			rear++;
			queue[rear]=data;
		}
		
		int Dequeue(){
			
			if( isEmpty()==1){
				printf("Queue Underflow!\n");
				exit(1);
			}
			int numri=radha[front];
			front++;
			return numri;
			
		}
		
		int Peek(){
			if(isEmpty()==1){
				printf("Queue Underflow!\n");
				exit(1);
			}
			int iPari=radha[front];
			return iPari;
		}

		void Print(){
			if(isEmpty()==1){
				printf("Queue Underflow!");
				exit(1);
			}
			printf("Radha:\n");
			for(int i=front;i<=rear;i++){
				printf("%d\n",radha[i]);
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
