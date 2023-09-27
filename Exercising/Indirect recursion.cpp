#include <stdio.h>

void Odd();
void Even();

int n=1;

void Odd(){
	if(n<=10){
		printf("%d ",n+1);
		n++;
		Even();
	}
	return;
}

void Even(){
	if(n<=10){
		printf("%d ",n-1);
		n++;
		Odd();
	}
	return ;
}


		int main(){
			Odd();
			
			return 0;
		}
