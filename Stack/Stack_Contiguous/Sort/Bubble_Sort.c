#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 20

typedef int StackEntry;

typedef struct
{
    StackEntry entry[MAX];
    int top;
}Stack;

//create stack
void createstack(Stack *s)
{
    s->top = -1;
    printf("\tStack Created..");
}

typedef enum{FALSE,True} Boolean;

//IsEmpty
Boolean isStackEmpty(const Stack *s)
{
    return(s->top == -1);
}

//IsFull
Boolean isStackFull(const Stack *s)
{
    return(s->top == MAX - 1);
}

//push
void push(StackEntry item, Stack *s)
{
    if(isStackFull(s))
    {
        printf("\tStack is Full.Can't push element.");
        exit(1);
    }
    else
    {
        s->top++;
        s->entry[s->top] = item;
    }
}

//pop
void pop(StackEntry *item, Stack *s)
{
    if(isStackEmpty(s))
    {
        printf("\tStack is Empty.Can't pop element.");
        exit(1);
    }
    else
    {
        *item = s->entry[s->top];
        s->top--;
    }
}

//print
void print(Stack *s)
{
    for(int m=0;m<=s->top;m++)
    {
        printf("%d\t",s->entry[m]);

    }
    printf("\n");

}


//Bubble sort
void bubblesort(StackEntry *sort, int count)
{
    int i,j,temp;

    for(i=0;i<=count-1;i++)
    {
        for(j=0;j<count-1-i;j++)
        {
            if(sort[j] > sort[j+1])
            {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }
}



//main function
void main()
{
    Stack s;
    int x,y,count=0,k;
    StackEntry item;
    StackEntry sort[MAX];

    printf("Do You Want to Create a Stack?(If yes Enter 1 and If exit Enter other value) : ");
    scanf("%d",&x);
    if(x == 1)
    {
        createstack(&s);
    }
    else
    {
        printf("\n\tTry Again...");
        exit(1);
    }

    while(1)
    {
        printf("\n\nDo you want to Push or pop or print or sort Element?(If push Enter 2 and If pop Enter 3, If print Enter 4, If sort Enter 5, If exit Enter other value) : ");
        scanf("%d",&x);

        switch(x)
        {
            case 2:
                printf("\n\tEnter the value of push element : ");
                scanf("%d",&item);
                push(item,&s);
                count++;
                printf("\tElement pushed");
                break;

            case 3:
                pop(&item,&s);
                count--;
                printf("\tElement popped");
                break;

            case 4:
                print(&s);
                break;

            case 5:
                for(k=0;k<count;k++)
                {
                    pop(&item,&s);
                    sort[k] = item;
                }
                printf("\tAll Elements popped");
                bubblesort(&sort ,count);
                for(k=0;k<count;k++)
                {
                    push(sort[k],&s);
                }
                break;

            default:
                    printf("\tYou haven't any choices.. Please run again code...\n\n");
                    exit(1);
        }
    }
getch();
}
