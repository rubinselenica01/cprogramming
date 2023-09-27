#include <stdio.h>
#include <conio.h>


int main (void){
	
	 int m=3;
	 int n=3;
	 int matrix[m][n]={{5,3,2},{1,2,3},{3,5,2}};
	
	int sum=0; 
	 for (int i=0;i<m;i++){
	 	for(int j=0;j<n;j++){
	 if ((i==j)||(j<i)){
	 	sum=sum+matrix[i][j];
	 }
	 		
	}
	 }
	 printf("The sum of elements under the main diagonal is %d.",shuma);
	 
	 return 0;
	 getchar();
}
