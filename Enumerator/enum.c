#include<stdio.h>
#include<conio.h>

enum days {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

void main()
{
    enum days d = thursday;
    printf("The day number stored in d is %d", d);

    enum days p = saturday;
    printf("\nThe day number stored in p is %d", p);

getch();
}
