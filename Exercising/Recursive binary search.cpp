#include <stdio.h>

int binary_search_recursive(int array[],int element,int left,int right){
					
		int mid=right+left/2;
					
		if(left>right)
			return -1;
					
		if(element==array[mid])
			return mid;
					
		else if(element<array[mid])
			return binary_search_recursive(array,element,left,mid-1);
					
		else
			return binary_search_recursive(array,element,mid+1,right);
			}

		int main(){
				
			int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
			int element;
			printf("Enter the element to be searched:");
			scanf("%d",&element);
				
			int index=binary_search_recursive(array,element,0,12);
				
			printf("index of %d: %d",element,index);
				
			getchar();
			return 0;
			}
			
			
