#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Stack Definition

#define MAX 20

typedef char StackEntry;

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
        printf("\nThe stack is : \n");
        for(int i=0; i<=s->top; i++)
        {
            printf("%c\t", s->entry[i]);
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
        printf("\nThe stack is : \n");
        for(int i=0; i<=s->top; i++)
        {
            printf("%c\t", s->entry[i]);
        }
    }
}

//main

void main() {
   Stack s;
   create(&s);

   char str[MAX];

   printf("Enter the string: ");
   scanf("%s", str);

   // Push each character of the string onto the stack
   int i;
   for (i = 0; str[i] != '\0'; i++) {
       push(str[i], &s);
   }

   printf("\n\nReversed string: ");

   // Pop characters from the stack and print them
   while (!isStackEmpty(&s)) {
       StackEntry x;
       pop(&x, &s);
       printf("%c", x);
   }

   printf("\n");
getch();
}

