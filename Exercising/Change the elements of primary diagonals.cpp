
#include <stdio.h>
#include <conio.h>

		int main(void){
			
		int n=4; 
		int m=4;
		int tmp;
		
		int matrix1[n][m]={{1,2,6,7},{2,4,5,8},{3,5,6,5},{1,2,3,4}};
		
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				
				if(i==j){
					tmp=matrix1[i][j];
					matrix1[i][j]=matrix1[i][n-1-j];
					matrix1[i][n-1-j]=tmp;
				}
			}
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				
				printf("%d\t",matrix1[i][j]);
			}
			printf("\n");
		}
		
			return 0;
			getchar();
		}
