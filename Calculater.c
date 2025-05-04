#include <stdio.h>
void main()
{
    int a, b, c;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter The Operator (+,-,*,/): ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        c = a + b;
        printf("Sum of %d and %d is %d", a, b, c);
        break;
    case '-':
        c = a - b;
        printf("Subtraction of %d and %d is %d", a, b, c);
        break;
    case '*':
        c = a * b;
        printf("Multiplication of %d and %d is %d", a, b, c);
        break;
    case '/':
        if (b != 0)
        {
            c = a / b;
            printf("Division of %d and %d is %d", a, b, c);
        }
        else
        {
            printf("Division by zero is not allowed.");
        }
        break;
    default:
        printf("Invalid operator");
    }
    printf("\n\n\n");
}