#include <stdio.h>

		/* Code a program that calculates the monthly benefits of a company employee
Apple, when the following payment terms are known:
1. The employee receives a basic salary of $1000, if he performs 200 hours of work ($5/hour).
2. for each additional hour, the employee benefits $10 more.
The program asks the user to set the total working hours and displays the salary
benefited from them.*/
		
				int main (void)
								{
									printf("\t\tWAGE CALCULATOR");
									printf("\n\n DISCLAIMER:");
									printf("\nGross Salary is 1000$ for 200 working hours.");
									printf("\nFor each additional hour, you get $10 more.");
						int choice;
						
									printf("\n\Choose by entering the alternative:");
									printf("\n1.-200 working hours");
									printf("\n2.+200 working hours");
									printf("\n3. 200 working hours");
									printf("\n\nYour choice:");
									scanf("%d",&choice);
												
						int hours;
									printf("\n\nEnter your working hours:");
									scanf("%d",&hours);
									
									int less, more, equal;
									
						
						switch (zgjedhja){
							
								case 1:
										less=hours*5;
										printf("\n\n\t\tYour wage for %d hours is: %d $.",hours,less);
								break;
								
								case 2:
										more=((hours-200)*10)+1000;
										printf("\n\n\t\tYour wage for %d hours is: %d $.",hours,more);
								break;
								
								case 3:
										equal=1000;
										printf("\n\n\t\tYour wage for %d hours is: %d $.",hours,equal);
												
								break;
								
								default:
										printf("Please select one of the choices.");
						}		
					getchar();
					return 0;
				}
		
					
				
		
