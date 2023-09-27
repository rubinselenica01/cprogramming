#include <stdio.h>

	
		
		int main(void){
			
				printf("Finding solutions for quadratic equation:\n\n\t\t\t a*x*x + b*x + c= 0");
			
			int a,b,c;
					printf("\n\nEnter the koeficients:");
					scanf("%d %d %d",&a,&b,&c);
					
			int dallori=(b*b)-(4*a*c);
					printf("The value:%d", dallori);
					
				if(dallori>0)
						printf("The equation has 2 solutions.");
				else if(dallori<0)
						printf ("The equation has no solutions.");
				else
						printf("The equations has 1 solution.");
				
			getchar;
			return 0;
			
		}
		
