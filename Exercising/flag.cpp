#include <stdio.h>
#include <conio.h>
int main (){
    
        int n;
        printf("Put the number of rows! : ");
        scanf("%d",&n);
        
        int i,j;
        
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                printf(" ");
            }
            printf("/");
            if(i<n/2){
                for(j=0;j<2*n;j++){
                    printf("/");
                }
            }
            
            printf("\n");
        }
          getch();
        return 0;
}
