#include <stdio.h>
#include <conio.h>

	int main(void){
		int n=3;
		int m=3;
		
		int based;
		
		int matrix1[n][m]={{1,2,6},{2,4,5},{3,5,6}};
		int matrix2[n][m]={};
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				matrix2[j][i]=matrix1[i][j];	
			}
		}
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(matrix1[i][j]==matrix2[i][j]){
					based=1;
				}
				else{
					based=0;
					break;
				}		
			}
		}
		
		if(based==0)
		printf("Tables are not symetric!");
		else
		printf("Tables are symetric!");
		
		return 0;
		getchar();
	}
