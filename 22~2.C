#include <stdio.h>
#include <conio.h>
    int main ()
    {
        
        int i, n, number[30];
        clrscr();
	printf("\n\nEnter the value of the n = ");
	scanf("%d", &n);

	printf("\nEnter the numbers\n");
        for (i = 0; i < n; ++i) 
        {
            scanf("%d", &number[i]);
        }
 
        number[n] = number[0];
        for (i = 0; i < n; ++i)
        {
            number[i] = number[i + 1];
        } 
 
        printf("Cyclically permuted numbers are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
        getch();
    }