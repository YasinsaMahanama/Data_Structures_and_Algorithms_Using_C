#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 100
int A [MAX_SIZE];
int top = -1;

void push(int x)
{   if(top == MAX_SIZE - 1)
    {
       printf("Error: stack overflow\n");
       return;
    }
    top++;
    A[top] = x;
}

void pop()
{
        if(top == -1)
        {
            printf("Error: Stack is empty, can't pop number\n");
            return;
        }
        top = top - 1;
}

void Top()
{
    A[top];
}

void print()
{
    int i;
    printf("Stack: ");
    for(i=0;i<=top;i++){
        printf("%d  ", A[i]);
    }
    printf("\n");
    printf("Top element is : %d\n",A[top]);

}

int main()
{
    push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    pop();
    print();
    push(12);
    print();
return 0 ;
}

