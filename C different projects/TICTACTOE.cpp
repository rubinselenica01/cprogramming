#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	

	char total[]={'O','X','1','2','3','4','5','6','7','8','9','\0'};
	int ZgjedhjaLojtar1,ZgjedhjaLojtar2;
	int i=1;

	void paraqitje(){
		system("COLOR E1");
	
		printf("TIC-TAC-TOE\n\n");
		printf("Lojtari 1: X\n");
		printf("Lojtari 2: O\n\n");
		printf("  | %c | %c | %c |\n", total[2],total[3],total[4]);
		printf("--|---|---|---|--\n");
		printf("  | %c | %c | %c |\n", total[5],total[6],total[7]);
		printf("--|---|---|---|--\n");
		printf("  | %c | %c | %c |\n", total[8],total[9],total[10]);
		
	}
	
	int KLojtar1(){
		if((total[2]=='X')&&(total[3]=='X')&&(total[4]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		
		else if((total[5]=='X')&&(total[6]=='X')&&(total[7]=='X')){
		printf("Lojtari 1 fiton");
			exit(0);		
		}
		
		else if((total[8]=='X')&&(total[9]=='X')&&(total[10]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
					}
		else if((total[2]=='X')&&(total[5]=='X')&&(total[8]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		else if((total[3]=='X')&&(total[6]=='X')&&(total[9]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		else if((total[4]=='X')&&(total[7]=='X')&&(total[10]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		else if((total[2]=='X')&&(total[6]=='X')&&(total[10]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		else if((total[4]=='X')&&(total[6]=='X')&&(total[8]=='X')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		else{
			return 1;
		}
	}
	
	int KLojtar2(){
		if((total[2]=='O')&&(total[3]=='O')&&(total[4]=='O')){
			printf("Lojtari 1 fiton");
			exit(0);
		}
		
		else if((total[5]=='O')&&(total[6]=='O')&&(total[7]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);		
		}
		
		else if((total[8]=='O')&&(total[9]=='O')&&(total[10]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);
		}
		else if((total[2]=='O')&&(total[5]=='O')&&(total[8]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);
		}
		else if((total[3]=='O')&&(total[6]=='O')&&(total[9]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);
		}
		else if((total[4]=='O')&&(total[7]=='O')&&(total[10]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);
		}
		else if((total[2]=='O')&&(total[6]=='O')&&(total[10]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);
		}
		else if((total[4]=='O')&&(total[6]=='O')&&(total[8]=='O')){
			printf("Lojtari 2 fiton");
			exit(0);
		}
		else{
			return 1;
		}
		
	}
	
	void zgjedhja(){
				KLojtar1();
				KLojtar2();
				
				if(i%2==1){
						printf("Lojtari 1 ben zgjedhjen:");
						scanf("%d",&ZgjedhjaLojtar1);
						total[ZgjedhjaLojtar1+1]=total[1];
				}
				else if(i%2==0){
						printf("Lojtari 2 ben zgjedhjen:");
						scanf("%d",&ZgjedhjaLojtar2);
						total[ZgjedhjaLojtar2+1]=total[0];
				}
				
				i++;
	}

		int main(){
			

		for(int j=0;j<9;j++){
			
		paraqitje();
		zgjedhja();
		
		system("cls");
		if(j==8){
			paraqitje();
			if(KLojtar1()==1 && KLojtar2()==1){
				printf("ASNJE LOJTAR NUK FITOI!");
				exit(0);
			}
			KLojtar1();
			KLojtar2();
		}
			
			
	 }
	
	    getchar();
		return 0;
		
		}
