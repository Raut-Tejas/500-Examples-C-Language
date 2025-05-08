#include<stdio.h>
void main()
{
    float a,b,c,d,perimeter;  
    printf("Enter the length of the first parallel side of the trapezium: ");  
    scanf("%f",&a);  
    printf("Enter the length of the second parallel side of the trapezium: ");  
    scanf("%f",&b);  
    printf("Enter the length of the first non-parallel side of the trapezium: ");  
    scanf("%f",&c);  
    printf("Enter the length of the second non-parallel side of the trapezium: ");  
    scanf("%f",&d);  
    perimeter=a+b+c+d;  
    printf("Perimeter of the trapezium is: %.2f",perimeter);
}