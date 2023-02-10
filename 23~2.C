#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
   int a[50],i,j,k, count = 0, dup[50], number;
   clrscr();
   printf("\n\nEnter size of the array: ");
   scanf("%d",&number);
   printf("\nEnter Elements of the array:\n");
   for(i=0;i<number;i++){
      scanf("%d",&a[i]);
      dup[i] = -1;
   }
   printf("Entered element are: ");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
   for(i=0;i<number;i++){
      for(j = i+1; j < number; j++){
	 if(a[i] == a[j]){
	    for(k = j; k <number; k++){
	       a[k] = a[k+1];
	    }
	    j--;
	    number--;
	 }
      }
   }
   printf("\n\nAfter deleting the duplicate element the Array is:");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
getch();
return 0;
}