#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is maximum",a);
    else
        printf("%d is maximum",b);
}