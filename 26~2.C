#include <stdio.h>
#include <conio.h>
int main() 
    {    
    int array[100], minimum, size, c, location = 1;
    clrscr();
    printf("\n\nEnter the number of elements in array\n");
    scanf("%d",&size);
    
    printf("Enter %d integers\n", size);
    
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);    
    
    minimum = array[0];
    
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
            minimum = array[c];
            location = c+1;
        }
    } 
    
    printf("Minimum element %d is present at location %d .\n",minimum , location);
getch();    
return 0;
    
}