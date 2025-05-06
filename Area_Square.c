#include<stdio.h>
void main()
{
    int side, area;
    printf("Enter the side of the square: ");   
    scanf("%d", &side);
    area = side * side;
    printf("Area of the square is: %d", area);
}