#include <stdio.h>
void main()
{
    int year, leap;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is a not leap year", year);
    }
}