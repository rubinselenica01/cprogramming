//qe rendit ne rendin rrites elementet e cdo rreshti te matrices

#include <stdio.h>
#include <conio.h>

		int main(void){
			int n=4;
			int v[n][n]={{5,3,4,2},{2,5,6,1},{4,3,1,7},{0,4,2,1}};
			int tmp;
			
		for (int l=0;l<n;l++){
			for (int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(v[l][i]<v[l][j]){
						tmp=v[l][i];
						v[l][i]=v[l][j];
						v[l][j]=tmp;
					}
				}
			}
		}
			
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
				
				printf("%d\t",v[i][j]);
			}
			printf("\n");		
			}
			
			return 0;
			getchar();
		}
