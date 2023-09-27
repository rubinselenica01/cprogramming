#include <stdio.h>
#include <stdlib.h>

		struct node{
			int data;
			struct node* link;
		};
		
	
	
	
	void push(int data,struct node** top){
 	
 	struct node* newNode= (struct node*)malloc(sizeof(struct node));
 	
 	if(newNode==NULL){
 		printf("Stack overflow!");
 		exit(1);
	 }
	 
 	newNode->data=data;
 	newNode->link=NULL;
 	
 	newNode->link=*top;
 	*top=newNode;
	  }	
 
 	int pop(struct node** top){
 		struct node* temp;
 		
		 int val;
		 temp=*top;
		 val=temp->data;
		 *top=(*top)->link;
		 free(temp);
		 temp=NULL;
		 return val;
 		
	 }
 
 void print(struct node** top){
 	struct node* temp;
 	temp=*top;
 	
 	
 	printf("Elements of the stack are:");
 	
 	while(temp){
 		printf("%d ",temp->data);
 		temp=temp->link;
	 }
	 printf("\n");
 }

void reverse_stack(struct node** top){
	struct node*top1=NULL;
	struct node*top2=NULL;
	
	while(*top!=NULL){
		push(pop(top),&top1);
		
	}
	
	while(top1!=NULL){
		push(pop(&top1),&top2);
	}
	
	while(top2!=NULL){
		push(pop(&top2),top);
	}
	

}


int main(void){
	int choice, data;
	struct node* top;
	
		while(1){
		printf("1. Push\n");
		printf("2. Print\n");
		printf("3. Reverse the stack\n");
		printf("4. Quit\n");
		printf("ENter your choice:");
		
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("ENter the element to push:");
				scanf("%d",&data);
				push(data,&top);
				break;
			case 2: 
				print(&top);
				break;			
			case 3: 
				reverse_stack(&top);
				printf("Stack is reversed.\n");
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice!");
				break;
						}
		
	}
	
	
	return 0;
}
