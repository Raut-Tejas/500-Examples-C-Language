#include <stdio.h>
void main()
{
    float cm, m, km;
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);
    m = cm / 100;
    km = cm / 100000;
    printf("Length in meter is: %.2f\n", m);
    printf("Length in kilometer is: %.2f", km);
}