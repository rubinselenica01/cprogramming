#include <stdio.h>
#include <stdlib.h>

        int main (void){
            char pergjigje;
            printf("\t\tROMBI\n ");
            
            do{
			int n;
            printf("Vendosni numrin e rreshtave:\n");
            scanf("%d",&n);
            
            int i,j;
            
            for(i=0;i<n;i++){
                
                        for(j=0;j<n-i;j++){
                            printf(" ");
                        } 
                        for(j=0;j<i+1;j++){
                            printf("*");
                            if(j<=i){
                                printf(" ");
                            }
                        }
                        printf("\n");
                
            }
            i=i-2;
            for(i;i>=0;i--){
                for(j=0;j<n-i;j++){
                    printf(" ");
                }
                for(j=0;j<i+1;j++){
                    printf("*");
                    if(j<=i){
                    printf(" ");
                    }
                    
                }
                printf("\n");
                
        }
        printf("\nDeshironi te provoni perseri?P/J	");
        scanf("%c",&pergjigje);
        pergjigje=getchar();
        
        if(pergjigje=='P'||pergjigje=='p'){
        	system("cls");
		}
    }while((pergjigje=='P')||(pergjigje=='p'));
    
    system("cls");
    printf("Rrofsh per keto sekonda!");
    
    		getchar();
            return 0;
            
        }
