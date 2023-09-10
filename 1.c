#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50];
    int size,i,num,pos;

    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("\n\nEnter the element of the array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d\n",&a[i]);
    }

    printf("\n\nThe array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

getch();
}
