#include <stdio.h>
void main()
{
    int side, perimeter;
    printf("Enter the side of the square: ");   
    scanf("%d", &side);
    perimeter = 4 * side;
    printf("Perimeter of the square is: %d", perimeter);
}