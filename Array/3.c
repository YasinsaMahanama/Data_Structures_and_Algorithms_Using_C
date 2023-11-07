#include <stdio.h>

int main(void)
{
    int a[50];
    int size, i, num, pos;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\nEnter data you want to insert:\n");
    scanf("%d", &num);

    printf("\nEnter position:\n");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size)
    {
        printf("\nInvalid position.");
    }
    else
    {
        for (i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;

        printf("\nThe new array:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
