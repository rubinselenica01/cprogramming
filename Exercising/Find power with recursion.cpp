#include <stdio.h>

		int Power(int base, int exponent){
			if(exponent==1){
				return base;
			}
			else{
				return base*Power(base,exponent-1);
			}
		}
		
		
		int main(){
			int base,exponent;
			scanf("%d %d",&base,&exponent);
			
			printf("%d",Power(base,exponent));
			
			return 0;
			
		}
