#include<stdio.h>
#include<conio.h>


void sum()
{
    int a,b,sum=0;
    printf("Enter the values for a & b.");
    printf("\na : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    sum = a + b;
    printf("\nSUM = %d",sum);
}

void main()
{
    sum();
getch();
}
