#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Stack Definition

#define MAX 20

typedef int StackEntry;

typedef struct
{
    int top;
    StackEntry entry[MAX];
}Stack;


//create stack

void create(Stack * s)
{
    s->top = -1;
}

//Is stack Empty

typedef enum {FALSE, TRUE} Boolean;

Boolean isStackEmpty(Stack *s)
{
    return(s->top == -1);
}

// Is stack full

Boolean isStackFull(Stack *s)
{
    return(s->top == MAX - 1);
}

// push

void push(StackEntry x, Stack * s)
{
    if(isStackFull(s))
    {
        printf("....Stack is full....");
        exit(1);
    }
    else
    {
        s->top++;
        s->entry[s->top] = x;
        printf("The stack is : \n");
        for(int i=0; i<=s->top; i++)
        {
            printf("%d\n", s->entry[i]);
        }
    }
}

//pop

void pop(StackEntry * x, Stack * s)
{
    if(isStackEmpty(s))
    {
        printf("....Stack is empty....");
        exit(1);
    }
    else
    {
        *x = s->entry[s->top];
        s->top--;
        printf("The stack is : \n");
        for(int i=0; i<=s->top; i++)
        {
            printf("%d\n", s->entry[i]);
        }
    }
}

//main

void main()
{
    Stack s;
    create(&s);
    push(5,&s);
    push(10,&s);
    push(15,&s);
    push(20,&s);

    StackEntry x;
    pop(&x,&s);

getch();
}
