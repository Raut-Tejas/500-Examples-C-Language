#include <stdio.h>
void main()
{
    int s1, s2, s3, perimeter;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &s1);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &s2);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &s3);
    perimeter = s1 + s2 + s3;
    printf("Perimeter of the triangle is: %d", perimeter);
}