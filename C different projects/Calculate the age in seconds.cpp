#include <stdio.h>

	int main (void) {
		
			
			printf("\t\t\t HELLO USER!");
			
			printf("\n\n\t\tI AM A CALCULATOR OF YOUR AGE IN SECONDS");
			
			int mosha;
			printf("\n\nENTER YOUR AGE YEARS:");
			scanf("%d",&years);
			
			int muajt;
			printf("\nENTER THE MONTHS PASSED OF THE CURRENT YEAR:");
			scanf("%d",&months);
			
			int ditet;
			printf("\nENTER THE DAYS PASSED OF THE CURRENT MONTH:");
			scanf("%d",&days);
			
			int ora;
			printf("\nENTER THE HOURS THAT PASSED TODAY:");
			scanf("%d",&hours);
			
			printf("\n\tYOUR AGE IN SECONDS:%d",(years*7*31*24*3600)+(years*4*30*24*3600)+(years*1*28*24*3600)+(months*30*24*3600)+(days*24*3600)+(hours*3600));
			printf("seconds.");
			
			getchar ();
			return 0;
			
	}
