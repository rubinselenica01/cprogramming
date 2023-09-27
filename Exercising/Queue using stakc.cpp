#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack1[MAX];
int stack2[MAX];

int top1=-1;
int top2=-1;

		void Enqueue(int);
		int Dequeue();
		void Push1(int);
		void Push2(int);
		int Pop1();
		int Pop2();
		int Peek();
		void Print();


		int main(){
			
			int choice,data;
			
			while(1){
				printf("1. Insert\n");
				printf("2. Delete\n");
				printf("3. Print the first element\n");
				printf("4. Print all the elements\n");
				printf("5. EXIT\n");
				printf("Enter your choice:\n");
				scanf("%d",&choice);
							
							switch(choice){
								case 1:
										printf("Enter the element:");
										scanf("%d",&data);
										Enqueue(data);
										break;
								case 2:
										printf("The deleted element is %d.\n",Dequeue());
										break;
								case 3:
										printf("The first element is %d.\n",Peek());
										break;
								case 4:
										Print();
										break;
								case 5:
										exit(1);
								default:
										printf("Choose a valid option!\n");
										break;
							}
			}
			 
			 
			 
			getchar();
			return 0;
		}
		
		void Enqueue(int data){
			if(top1==MAX-1){
				printf("Queue overflow!\n");
				exit(1);
			}
			Push1(data);
		}
		
		int Dequeue(){
			
			int temp;
			if(top2==-1){
					if(top1==-1){
							printf("Queue underflow!\n");
							exit(1);
								 }
					while(top1!=-1){
						temp=Pop1();
						Push2(temp);
					}
				
			}
			return Pop2();
		}
		
		void Push1(int data){
			top1=top1+1;
			stack1[top1]=data;
		}
		
		void Push2(int data){
			top2=top2+1;
			stack2[top2]=data;
		}
		
		int Pop1(){
			int value;
			value=stack1[top1];
			top1=top1-1;
			return value;
		}
		
		int Pop2(){
			int value;
			value=stack2[top2];
			top2=top2-1;
			return value;
		}
		
		int Peek(){
			if(top1==-1&&top2==-1){
				printf("Queue underflow!\n");
				exit(1);
			}
			if(top2==-1){
				return stack1[0];
			}
			
			else{
				return stack2[top2];
			}
		}
		
		void Print(){
			if(top1==-1&&top2==-1){
				printf("Queue underflow!\n");
				exit(1);
			}
			int i;
			for(i=top2;i>=0;i--){
				printf("%d ",stack2[i]);
			}
			
			for(i=0;i<=top1;i++){
				printf("%d ",stack1[i]);
			}
			printf("\n");
		}
