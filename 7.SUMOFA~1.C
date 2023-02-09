#include<stdio.h>
#include<conio.h>
int main()
{
int sum = 0;
int n,i,arr[10]={10,20,30,40,50,60,70,80,90,100};
printf("Enter the region of the array B\W 1 to 10 : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
sum =sum + arr[i];
}
printf("Sum of arrary elements: %d",sum);
getch();
return 0;
}
