#include<stdio.h>
void main()
{
float a,b,h,area;
printf("Enter the length of the first parallel side of the trapezium: ");
scanf("%f",&a);
printf("Enter the length of the second parallel side of the trapezium: ");
scanf("%f",&b);
printf("Enter the height of the trapezium: ");
scanf("%f",&h);
area=((a+b)/2)*h;
printf("Area of the trapezium is: %.2f",area);
}