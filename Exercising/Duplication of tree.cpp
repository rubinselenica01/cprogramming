#include <stdio.h>
#include <stdlib.h>

	struct node {
		struct node* left;
		int data;
		struct node* right;
	};
	
	struct node* CreateNode(int data){
		
		struct node* NewNode=(struct node*)malloc(sizeof(struct node));
			
			NewNode->left=NULL;
			NewNode->data=data;
			NewNode->right=NULL;
		
		return NewNode;
	}
	
	struct node* CreateTree(){
		int answer,data;
		
		printf("Do you want to add a node?(1 for yes and 0 for no)");
		scanf("%d",&answer);
		
		if(!answer){
			return NULL;
		}
		else{
			struct node* NewNode=(struct node*)malloc(sizeof(struct node));
			printf("Enter the data:");
			scanf("%d",&data);
			NewNode->data=data;
			
			printf("Left child of %d:\n",NewNode->data);
			NewNode->left=CreateTree();
			
			printf("Right child of %d:\n",NewNode->data);
			NewNode->right=CreateTree();
			return NewNode;
		}
	}
	
	struct node* DuplicateTree(struct node*root1){
		if(root1==NULL){
			return NULL;
		}
		struct node*NewNode=(struct node*)malloc(sizeof(struct node));
		NewNode->data=root1->data;
		
		NewNode->left=DuplicateTree(root1->left);
		NewNode->right=DuplicateTree(root1->right);
		return NewNode;
	}	
	
	
	void Print(struct node* root1){
		if(root1==NULL){
			return;
		}
		printf("%d ",root1->data);
		Print(root1->left);
		Print(root1->right);
	}


		int main(){
			struct node* root1=CreateTree();
			
			Print(root1);
			
			struct node* root2=DuplicateTree(root1);
			
			printf("\n");
			
			Print(root2);
			
			
			return 0;
		}
