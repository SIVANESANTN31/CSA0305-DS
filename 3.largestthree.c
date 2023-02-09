#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter the number1 : ");
scanf("%d",&a);
printf("Enter the number2 : ");
scanf("%d",&b);
printf("Enter the number3 : ");
scanf("%d",&c);
if(a>b && a>c){
printf("%d is greatest number.",a);
}
else if(b>c && b>a){
printf("%d is greatest number.",b);
}
else{
printf("%d is greatest number.",c);
}
getch();
return 0;
}



