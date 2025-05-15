#include<stdio.h>
void main(){
    int n;
    float p,r,t,si;
    printf("Enter principle amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time in years: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple interest is: %.2f",si);
}