 #include<stdio.h>
int sum(int nr1, int nr2)
{
   if(nr1>nr2)
    return 0;
    
    else
    return nr1+sum(nr1+2,nr2);
}
int main()
{
    int nr1=1,nr2;
    
    printf("Enter the limit of odd number:");
    scanf("%d",&nr2);
    
    printf("The sum of every number is: %d.",sum(nr1,nr2));
    
    return 0;
}
