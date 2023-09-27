#include <stdio.h>
#include <conio.h>
//Gjetja e madhesise se nje vektori.

		int main (void){
					int n;
					printf("Vendosni numrin e te dhenave hyrese!.\n");
					scanf("%d",&n);
					
					int v[n], madhesia;
					
					madhesia= sizeof(v)/sizeof(v[0]);
					
					printf("Madhesia e vektorit eshte %d.",madhesia);
					getch();
					return 0;
		}
