#include<stdio.h>
#include<conio.h>
void printFibonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
	 n3 = n1 + n2;
	 n1 = n2;
	 n2 = n3;
	 printf("%d ",n3);
	 printFibonacci(n-1);
    }
}
int main(){
    int n;
    clrscr();
    printf("\n\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);
    getch();
  return 0;

 }