#include <stdio.h>
#include <stdlib.h>

 struct node{
 	int data;
 	struct nyja* link;
 }* top=NULL;


	int isEmpty(){
		if(top==NULL)
		return 1;
		else
		return 0;
	}

 void push(int d){
 	
 	struct node* ptr= (struct node*)malloc(sizeof(struct node));
 	
 	if(ptr==NULL){
 		printf("Stack overflow!");
 		exit(1);
	 }
	 
 	ptr->data=d;
 	ptr->link=NULL;
 	
 	ptr->link=top;
 	top=ptr;
 }
 
 int pop (){
 	
 	struct nyja* ptr= top;

 	if(isEmpty()){
 		printf("Stack underflow!");
 		exit(1);
	 }
	 
 	 int nr=top->data;
	 top=ptr->link;
	 free(ptr);
	 ptr=NULL;
 	
 	return nr;
 }
 
 int peek(){
 	
 	if(isEmpty()){
 		printf("Stack underflow!");
 		exit(1);
	 }
	 return top->data;
 }
 
 void print(){
 	struct node* tmp;
 	tmp=top;
 	
 	if(isEmpty()){
 		printf("Stack underflow!");
 		exit(1);
	 }
 	printf("The elements of stack are:");
 	
 	while(tmp){
 		printf("%d ",tmp->data);
 		tmp=tmp->link;
	 }
	 printf("\n");
 }


int main(){
	
	int choice,data;
	
	while(1){
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print the top element\n");
		printf("4. Printall elements\n");
		printf("5. Quit\n");
		printf("Enter your choice:");
		
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("ENter the element to push:");
				scanf("%d",&data);
				push(data);
				break;
			case 2: 
				data=pop(); 
				printf("The deleted element is %d.\n",data);
				break;			
			case 3: 
				printf("THe top element now is %d.\n",peek());
				break;
			case 4:
				print();
				break;
			case 5:
				exit(1);
			default:
				printf("Wrong choice!");
				break;
						}
		
	}
	return 0;
}
	
	
