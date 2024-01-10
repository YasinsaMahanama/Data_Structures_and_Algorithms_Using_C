#include<stdio.h>
#include<conio.h>

typedef struct
{
    char name[20];
    int age;
    int phoneNo;
}Emp;

Emp e1, e2;

void main()
{
    printf("For e1 Employee.....\n");
    printf("Enter your name : ");
    scanf("%s", e1.name);
    printf("Enter your age : ");
    scanf("%d",&e1.age);
    printf("Enter your Phone number : ");
    scanf("%d",&e1.phoneNo);

    printf("\n\n\nFor e2 Employee.....\n");
    printf("Enter your name : ");
    scanf("%s", e2.name);
    printf("Enter your age : ");
    scanf("%d",&e2.age);
    printf("Enter your Phone number : ");
    scanf("%d",&e2.phoneNo);

    printf("\n\n\nThe details of the employee...");
    printf("\n\n....e1....\n");
    printf("\n Name : %s\n Age : %d\n Phone Number : %d\n",e1.name,e1.age,e1.phoneNo);

    printf("\n\n....e2....\n");
    printf("\n Name : %s\n Age : %d\n Phone Number : %d\n",e2.name,e2.age,e2.phoneNo);

getch();
}
