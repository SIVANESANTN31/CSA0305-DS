#include<stdio.h>
#include<conio.h>
int main()
{
int i,j, m1[2][2], m2[2][2], sum[2][2];
printf("Enter A Matrix Value: ");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&m1[i][j]);
printf("Enter B Matrix Value: ");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&m2[i][j]);
printf("Sum of two matrix: ");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		sum[i][j] = m1[i][j]+m2[i][j];
printf("Matrix of two number: ");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		printf("%d",sum[i][j]);
getch();
return 0;
}