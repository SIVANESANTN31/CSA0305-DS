#include<stdio.h>
#include<conio.h>
long int fact(int n);
int main() {
    int n;
    clrscr();
    printf("\n\n Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, fact(n));
    getch();
    return 0;
}

long int fact(int n) {
    if (n>=1)
	return n*fact(n-1);
    else
	return 1;
}