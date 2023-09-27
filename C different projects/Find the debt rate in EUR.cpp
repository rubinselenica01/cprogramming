#include <stdio.h>
	
	int main(void){
		
			printf("\t\tA program that calculates the bank interests\n\t\t\t\tNE LEKE");
			
			
			
			printf("\n\nPlease select the period of your debt:");
			printf("\n1.Within a year.");
			printf("\n2.More than a year.");
			
			int choice,days,amount;
			float percentage;
			
			printf("\n\nYour choice:");
			scanf("%d",&choice);
			
			printf("\nDays number:");
			scanf("%d",&days);
			
			printf("\nMoney amount:");
			scanf("%d",&amount);
			
			printf("\nRate percentage:");
			scanf("%f",&percentage);
			
			float rate1,rate2;
			
			switch (zgjedhja){
				
				case 1:
						rate1= amount*(percentage/100)*days/365;
						printf("\n\nThe bank's interest for less than a year, for %d days, is: %.1f EUR.",days,rate1);
				break;
				
				case 2:
						rate2=amount*(percentage/100)*3;
						printf("\n\nThe bank's interest for more than a year, for %d days, is: %.1f EUR.",days,rate2);
						
				break;
				
				default:
						printf("\n\nPLEASE CHOOSE ONE OF THE OPTIONS!!!!");
					
			}
			getchar;
			return 0;
			
	} 
