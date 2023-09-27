#include <stdio.h>
#define maxlength 40

int main(){
	
	char str[maxlength];
	
	fgets(str,sizeof(str),stdin);
	
	char *p1=str;
	
	char germa;
	char *p2=&germa;
	
	printf("Put the char to find! : ");
	scanf("%c",p2);
	
	int i=0;
	while(*p1!='\0'){
		if((*p1)==(*p2)){
			i=1;
			break;
		}
		p1++;
		
	}
	if(i==1){
	printf("Char %c is present!",*p2);
}
	else
	printf("Char %c is not present!",*p2);
	
	return 0;
}
