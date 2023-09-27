#include <stdio.h>

		int length(char string[],int i){
			
				if(string[i]=='\0'){
					return 0;
				}
					
					else{
						
						return length(string,i+1)+1;
					}
			
		}

			int main(){
				int i=0;
				char string[]="Rubini";
				
				printf("Length of string is: %d",length(string,i));
				
				return 0;
			}
