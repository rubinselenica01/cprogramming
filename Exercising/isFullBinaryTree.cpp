#include <stdio.h>
#include <stdlib.h>

		struct node{
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
		int isFullBinaryTree(struct node* root){
			int left,right;
			if(root==NULL){
				return 1;
			}
			if(root->left==NULL&&root->right==NULL){
				return 1;
			}
			if(root->left&&root->right){
				left=isFullBinaryTree(root->left);
				right=isFullBinaryTree(root->right);
				return(left&&right);
			}
			return 0;
		}
		
		int main(){
			struct node* root=NULL;
			
			root=CreateNode(1);
			root->left=CreateNode(2);
			root->right=CreateNode(3);
			root->left->left=CreateNode(4);
			root->left->right=CreateNode(5);
			root->right->right=CreateNode(6);
			
			if(isFullBinaryTree(root)){
				printf("The tree is a Full Binary Tree!\n");
			}
			else
				printf("The tree is not a Full Binary Tree!\n");
			
			getchar();
			return 0;
		}
