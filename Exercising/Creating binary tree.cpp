#include <stdio.h>
#include <stdlib.h>

		struct node{
			struct node* left;
			int data;
			struct node* right;
		};

		struct node* createTree(){
			int input,data;
			printf("Do you want to add a node? (0 for no and 1 for yes)");
			scanf("%d",&input);
			if(!input){
				return NULL;
			}
			else{
				struct node* NewNode=(struct node*)malloc(sizeof(struct node));
				
				printf("Enter the data:");
				scanf("%d",&data);
				NewNode->data=data;
				
				printf("Left child of %d:\n", NewNode->data);
				NewNode->left=createTree();
				
				printf("Right child of %d:\n", NewNode->data);
				NewNode->right=createTree();
				
				return NewNode;
			}
		}

		int main(){
			struct node* root=createTree();
			printf("%d ",root->data);
			printf("%d ",root->left->data);
			printf("%d ",root->right->data);
			getchar();
			return 0;
		}
