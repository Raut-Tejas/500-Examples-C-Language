#include<stdio.h>
void main()
{
    int b,s,perimeter;
    printf("Enter the base of the parallelogram: ");
    scanf("%d",&b);
    printf("Enter The side of the parallelogram: ");
    scanf("%d",&s);
    perimeter=2*(b+s);
    printf("Perimeter of the parallelogram is: %d",perimeter);
    
}