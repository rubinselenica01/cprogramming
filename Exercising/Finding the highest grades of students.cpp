#include <stdio.h>

	int main(void){
		
		int n,m;
		printf("Put the student's number and subjects number:");
		scanf("%d%d",&m,&n);
		
		int matrix[m][n];
		
		for(int i=0;i<m;i++){
			printf("Insert the grades of student %d",i);
			for(int j=0;j<n;j++){
				scanf("%d",&matrix[i][j]);
			}
		}
		
		int v[m];
		
		for(int i=0;i<m;i++){
			int s=0;
			for(int j=0;j<n;j++){
				s+=matrix[j][i];
			}
			v[i]=(s/m);
		}
		int max,poz;
		for(int i=0;i<n;i++){
			if(v[i]>v[i+1]){
				max=v[i];
				poz=i;
			}
			
		}
		printf("The subject with the highest grades is L%d\n",poz+1);
		printf("Students' grades':\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(j==poz){
					continue;
				}
				
					printf("%d\t",matrix[i][j]);
				}
					printf("\n");
			}
		return 0;
		
	}
