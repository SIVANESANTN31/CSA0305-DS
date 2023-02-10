#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    int arr[100];
    clrscr();
    printf("\n\nEnter number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements in the array:\n ",n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }

    printf("Even numbers in the array are: ");
    for(i=0;i<n;i++)
    {
	if(arr[i]%2==0)
	    printf("%d ", arr[i]);
    }

    printf("\nOdd numbers in the array are: ");
    for(i=0;i<n;i++)
    {
	if(arr[i]%2==1)
	    printf("%d ", arr[i]);
    }
    getch();
    return 0;
}