#include<stdio.h>
void main()
{
    int l,w,perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("Enter the width of the rectangle: ");
    scanf("%d",&w);
    perimeter=2*(l+w);  
    printf("Perimeter of the rectangle is: %d",perimeter);
}