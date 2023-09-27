#include <conio.h>
#include <stdio.h>
		
		
		struct TikTok{
			char name[30];
			int age;
			long long followers;
			long long viewers;
			long long points;
			long double revenue;
			
		};
		
		
		void insert_elem(struct TikTok *k){
			printf("Enter the name and surname of the user :");
			fgets(k->name,sizeof (k->name),stdin);
			
			printf("Enter the age of user:");
			scanf("%d",&k->age);
			
			if(k->age>=18){
				
			printf("Enter the followers of the user :");
			scanf("%lli",&k->followers);
			
				if(k->followers>=10000){
				
				printf("Enter the viewers :");
				scanf("%lli",&k->viewers);
				
				if(k->viewers>=100000){
				

				printf("Enter the accumulated points :");
				scanf("%lli",&k->points);
			
				k->fitimi=(34/100)*k->points;
				}
				
			else
				printf("You can't earn money from TikTok because you must have over 100.000 viewers last month!");
				
		}
				else
				printf("You can't earn money from TikTok beacuse you must have over 1.000 followers!");
	    }
					else 
					printf("You can't earn money from TikTok beacuse you should be over 18!");
		}
		


		int main (void){
			
			struct TikTok k;
			insert_elem(&k);
			
			printf("%s",k.name);
			
			
			return 0;
			getchar();
		}
