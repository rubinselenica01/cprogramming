#include <stdio.h>
#include <stdlib.h>

struct node{
	int priority;
	int element;
	struct node* link;
}* front=NULL;

			int isEmpty(){
				if(front==NULL){
					return 1;
				}
				return 0;
			}

			void Enqueue(int priority,int element){
				struct node* NewNode=(struct node*)malloc(sizeof(struct node)); //allocates size of the structure node
				
				if(NewNode==NULL){
					printf("No free space!\n");
					exit(1);
				}
				NewNode->element=element;
				NewNode->priority=priority;
				NewNode->link=NULL;
				
				if(isEmpty()||priority<=front->priority){//if the list is empty, the node will be the first node of the list|| if priority is less than the priority of the first node,
															//make the actual node the first node of the list
					NewNode->link=front;
					front=NewNode;
				}
				else{
				
				struct node* traversal=front;			//when we come at this line, it means that the list is not empty and priority is greater than front priority
				
				while(traversal->link!=NULL && traversal->link->priority<=priority){//checking traversal link because we do not want to lose reference and checking traversal link priority
																						//again to not loose reference and checking starts from the second node.
					traversal=traversal->link;
				}
				NewNode->link=traversal->link;
				traversal->link=NewNode;
			}
			}


		int Dequeue(){
				if(isEmpty()){
					printf("Queue underflow!\n");
					exit(1);
				}
				struct node* clear=front;
				int element=clear->element;
				front=clear->link;
				free(clear);
				clear=NULL;
				
				return element;
			
		}
		
		void Print(){
			if(isEmpty()){
				printf("Queue underflow!\n");
				exit(1);
			}
			struct node* traversal=front;
			while(traversal!=NULL){
				printf("%d.%d ",traversal->priority,traversal->element);
				traversal=traversal->link;
			}
			printf("\n");
		}

		int main(){
			int choice, number, priority;
			while(1){
				printf("1.Insert\n");
				printf("2.Delete\n");
				printf("3.Print all the elements.\n");
				printf("4.Quit\n");
				printf("Enter your choice:");
				scanf("%d",&choice);
						
						switch (choice){
							case 1:
									printf("Enter priority and element:");
									scanf("%d",&priority);
									scanf("%d",&number);
									Enqueue(priority,number);
									break;
							case 2:
									printf("The deleted element is %d.\n",Dequeue());
									break;
							case 3:
									Print();
									break;
							case 4:
									exit(1);
							default:
									printf("Enter a valid choice!\n");
									break;
						}
			}
			getchar();
			return 0;
		}
