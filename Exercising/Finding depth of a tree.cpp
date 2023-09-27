#include <stdio.h>
#include <stdlib.h>
//algoritmi i preorder traversal:
//1.Visit the root node.
//2.Visit the left subtree.
//3.Visit the right subtree.


		struct node{
			struct node* left;
			int data;
			struct node* right;
		};
		void PreOrder(struct node* root){
			if(root==NULL){
				return;
			}
			printf("%d ",root->data);
			PreOrder(root->left);
			PreOrder(root->right);
		}
		
		void InOrder(struct node* root){
			if(root==NULL){
				return;
				}
			InOrder(root->left);
			printf("%d ",root->data);
			InOrder(root->right);
		}
		
		void PostOrder(struct node* root){
			if(root==NULL){
				return;
			}
			PostOrder(root->left);
			PostOrder(root->right);
			printf("%d ",root->data);
		}

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
			PreOrder(root);
		printf("\n");
		
		 InOrder(root);
		printf("\n");
		
		 PostOrder(root);
		
			
			return 0;
		}
