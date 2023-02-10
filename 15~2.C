#include <stdio.h>
#include <stdlib.h>
 
int main()  
{   
int n1=0,n2=1,n3,i,number;
clrscr();
printf("\n\nEnter the number of elements to be printed in Fibonacci series:");
scanf("%d",&number);
printf("\n%d %d",n1,n2);

for(i=2;i<number;++i)
{
  n3=n1+n2;
  printf(" %d",n3);
  n1=n2;
  n2=n3;
}
getch();
}