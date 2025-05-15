#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch=getchar();
    printf("ASCII value of %c is %d", ch, ch);
}