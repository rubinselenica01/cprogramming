#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void){
			char string[]={"C program"};
			int fr=0;
			char character='r';
			
			printf("%s",string);
			
			for(int i=0;string[i]!='\0';i++){
				if(string[i]=='r'){
					fr++;
				}
			}
			
			printf("\nTHe frequency of %c in string / %s / is %d.",character,string,fr);
			return 0;
			getchar();
}
