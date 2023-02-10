#include <stdio.h>
#include <conio.h>
int main()
{
    int array[100], position, c, n;
    clrscr();
    printf("\n\nEnter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);

    printf("\nEnter the location where you wish to delete element\n");
    scanf("%d", &position);

    if ( position >= n+1 )
    printf("\nDeletion not possible.\n");

    else
    {
	for ( c = position - 1 ; c < n - 1 ; c++ )
	array[c] = array[c+1];

	printf("\nResultant array is\n");

	for( c = 0 ; c < n - 1 ; c++ )
	printf("%d\n", array[c]);
    }

    getch();
    return 0;
}