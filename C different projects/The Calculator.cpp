#include <stdio.h>
#include <stdlib.h>

int main(){
	
system("COLOR E1");
float a,b,c;
int n;
char pergjigje;


do {
	system("cls");
	printf("******************************CALCULATOR******************************\n\n");
    printf("\nInput the first number:\n");
    scanf("%f",&a);
			
    printf("\nInput the second number:\n");
    scanf("%f",&b);
    
    printf("\nChoose the action:\n\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&n);

			switch (n){
						case 1: 
								c=a+b;
								printf("\nThe result is %.2f.\n",c);
								break;
						case 2:
								c=a-b;
								printf("\nThe result is %.2f.\n",c);
								break;
						case 3:
								c=a*b;
								printf("\nThe result is  %.2f.\n",c);
								break;
						case 4:
								if(b==0){
									printf("\nDivision by 0 is not possible!\n");
										}
								else{
									c=a/b;
									printf("\nThe result is %.2f.\n",c);
										}
								break;
						default:
								printf("\nPLEASE SELECT A VALID OPTION!!!\n");
								break;
									}
					printf("\nDo you want to perform another action?(Y/N)\n\n");
    				scanf("%c",&pergjigje);
    				pergjigje=getchar();
					  }while((pergjigje=='y')|| (pergjigje=='Y'));

getchar();
return 0;
}
