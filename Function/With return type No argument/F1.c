#include<stdio.h>
#include<conio.h>


int sum()
{
    int a,b,sum=0;
    printf("Enter the values for a & b.");
    printf("\na : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    sum = a + b;
    return sum;

}

void main()
{
    int A = sum();
    printf("\nSUM = %d",A);

getch();
}
