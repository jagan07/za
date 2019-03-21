#include <stdio.h>
#include<conio.h>
void main()
{
    int base, ex;
    clrscr();
    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &ex);

    while (ex != 0)
    {
        result *= base;
        }
     printf("Answer = %lld", result);
     getch();
}
