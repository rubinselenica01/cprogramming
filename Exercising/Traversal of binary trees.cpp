#include <stdio.h>
#include <stdlib.h>
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
		
		int maxDepth(struct node * root)
{
  // Root being null means tree doesn't exist.
  if (root == NULL)
    return 0;
  
  // Get the depth of the left and right subtree 
  // using recursion.
  int leftDepth = maxDepth(root->left);
  int rightDepth = maxDepth(root->right);

  // Choose the larger one and add the root to it.
  if (leftDepth > rightDepth)
    return leftDepth + 1;
  else
    return rightDepth + 1;
}
		
		int main(){
			struct node* root=createTree();
			PreOrder(root);
		printf("\n");
		
		 InOrder(root);
		printf("\n");
		
		 PostOrder(root);
			printf("\n%d",maxDepth(root));
			
			return 0;
		}
