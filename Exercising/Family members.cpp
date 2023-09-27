#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


		int main(void){
			
			int numri_i_antareve;
			char emri[30];
			char mbiemri[20];
			char gjinia[10];
			int mosha;
			char statusi[15];
			
			printf("Vendos emrin e file qe do te vendosesh te dhenat!");
			char name[50];
			scanf("%s",name);
			//perdoruesi ska nevoje te vendosi praprashtesen .txt
			strcat(name,".txt");
			
			FILE *notepadi;
			
			notepadi=fopen(name,"w");
			if(notepadi==NULL){
				printf("ERROR404! File po krijohet...");
				exit(1);
			}
			printf("Vendos numrin e anetareve te familjes! :");
			scanf("%d",&numri_i_antareve);
			
						
			for(int i=0;i<numri_i_antareve;i++){
				printf("Vendos emrin e anetarit %d: ",i+1);
				scanf("%s", emri);
				
				printf("Vendos mbiemrin e anetarit %d: ",i+1);
				scanf("%s", mbiemri);
				
				printf("Vendos gjinine e anetarit %d: ",i+1);
				scanf("%s", gjinia);
				
				printf("Vendos moshen e anetarit %d: ",i+1);
				scanf("%d", &mosha);
				
				printf("Vendos statusin e anetarit ne familje %d: ",i+1);
				scanf("%s", statusi);
				
				fprintf(notepadi,"Emri: %s \nMbiemri: %s \nGjinia: %s \nMosha: %d \nStatusi: %s\n",emri,mbiemri,gjinia,mosha,statusi);
			}
			
			
			fclose(notepadi);
			system("cls");
			
			FILE *nt=fopen(name,"r");
			
			char g;
			
			while((g=fgetc(nt))!=EOF){ 
			 printf("%c",g);
			 
			}
		
			fclose(nt);
			return 0;
		}
