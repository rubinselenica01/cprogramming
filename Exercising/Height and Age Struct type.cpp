#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("COLOR E1");
	
	int n;
	printf("Enter the number of persons you want to register:");
	scanf("%d",&n);
	system("cls");
	
	struct person{
	int height;
	int age;
};
	struct person p1[n];
	
	for(int i=0;i<n;i++){
	
	printf("Enter the height of person %d :",i+1);
	scanf("%d",&p1[i].height);
	
	printf("\n");
	
	printf("Enter the age of person %d:",i+1);
	scanf("%d",&p1[i].age);
	
	system("cls");
}

		for(int i=0;i<n;i++){
			
			printf("Height of person %d: %d\n",i+1,p1[i].height);
			printf("Age of person %d: %d\n\n",i+1,p1[i].age);
		}
	
	
	return 0;
}
