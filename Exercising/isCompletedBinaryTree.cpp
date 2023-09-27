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
		
		int CountNodes(struct node* root){
			if(root==NULL){
				return 0;
			}
			else if(root->left==NULL&&root->right==NULL){
				return 1;
			}
			else{
				int left=CountNodes(root->left);
				int right=CountNodes(root->right);
				return (1+left+right);
			}
		}
		
		int isCompletedBinaryTree(struct node* root,int index,int count){
			if(root==NULL){
				return 1;
			}
			if(index>=count){
				return 0;
			}
			int left=isCompletedBinaryTree(root->left,2*index +1,count);
			int right=isCompletedBinaryTree(root->right,2*index +2,count);
			return(left && right);
		}
		
		int maxDepth(struct node * root)
{
  // Root being null means tree doesn't exist.
  if (root == NULL)
    return -1;
  
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
			struct node* root=NULL;
			root=CreateNode(1);
			root->left=CreateNode(2);
			root->right=CreateNode(3);
			root->left->left=CreateNode(4);
			root->left->right=CreateNode(6);
			root->right->left=CreateNode(5);
			
			int count=CountNodes(root);
			int index=0;
			if(isCompletedBinaryTree(root,index,count)){
				printf("Yes");
			}
			else{
				printf("No");
			}
			
			printf("%d",maxDepth(root));
		
			getchar();
			return 0;
		}
