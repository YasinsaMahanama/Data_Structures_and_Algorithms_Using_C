#include<stdio.h>
#include<conio.h>

union Emp
{
    char name[20];
    int age;
};

union Emp e1, e2;

void main()
{
    printf("For e1 Employee.....\n");
    printf("Enter your name : ");
    scanf("%s", e1.name);
    printf("Enter your age : ");
    scanf("%d",&e1.age);

    printf("\n\n\nFor e2 Employee.....\n");
    printf("Enter your name : ");
    scanf("%s", e2.name);
    printf("Enter your age : ");
    scanf("%d",&e2.age);

    printf("\n\n\nThe details of the employee...");
    printf("\n\n....e1....\n");
    printf("\n Name : %s\n Age : %d\n",e1.name,e1.age);

    printf("\n\n....e2....\n");
    printf("\n Name : %s\n Age : %d\n",e2.name,e2.age);

getch();
}
