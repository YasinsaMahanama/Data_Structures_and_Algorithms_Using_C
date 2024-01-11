#include<stdio.h>
#include<conio.h>


void sum(int x, int y)
{
    int sum=0;

    sum = x + y;
    printf("SUM = %d",sum);
}

void main()
{
    sum(4,6);
getch();
}
