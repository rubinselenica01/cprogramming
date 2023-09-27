#include <stdio.h>

	int main(void){
		
				printf("THIS IS A PROGRAM THAT CALCULATES BODY INDEX.");
				
				float weight;
				float height;
				
				printf("\n\nEnter your weight:");
				scanf("%f",&weight);
				
				
				printf("\n\nEnter your height:");
				scanf("%f",&height);
				
				float index=weight/(height*height);
				printf("\n\nYour body index is: %f. ",index);
				
						if(index<18.5)
						{
							printf("\n\nYou are under the normal weight!");
							printf("\n\nYour normal weight should be %f KG.",weight=21.5*height*height);
							}
							
							
						else if((index>=18.5)&&(index<=24.9))
							printf("\n\nYou have a normal weight!");
						
						else if((index>=25)&&(index<=29.9))
						{						
							printf("\n\nYou are over the normal weight!");
							printf("\n\nYour weight should be %f KG.",weight=21.5*height*height);
						}
							
						else {
							printf("\n\nYou are obese!");
							printf("\n\nYOur normal weight should be %f KG.",weight=21.5*height*height);
						}
						
						getchar();
						return 0;
												
						}
