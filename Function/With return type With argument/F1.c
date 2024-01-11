#include<stdio.h>
#include<conio.h>


int sum(int x, int y)
{
    int sum=0;

    sum = x + y;
    return sum;

}

void main()
{
    int A = sum(4,6);
    printf("SUM = %d",A);

getch();
}
