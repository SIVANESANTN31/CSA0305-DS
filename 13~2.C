#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n, i;
    unsigned long long f = 1;
    clrscr();
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Error! Please enter any positive integer number");
 
    else
    {
        for(i=1; i<=n; ++i)
        {
            f *= i; 
        }
        printf("Factorial of Number %d = %llu", n, f);
    }
 
    getch();
}