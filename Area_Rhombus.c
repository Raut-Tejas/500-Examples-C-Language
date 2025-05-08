#include<stdio.h>
void main()  
{  
    float d1,d2,area;  
    printf("Enter the length of the first diagonal of the rhombus: ");  
    scanf("%f",&d1);  
    printf("Enter the length of the second diagonal of the rhombus: ");  
    scanf("%f",&d2);  
    area=(d1*d2)/2;  
    printf("Area of the rhombus is: %.2f",area);  
}