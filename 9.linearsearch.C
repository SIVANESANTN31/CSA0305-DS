#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], s, c, n;
    printf("Enter the no.of.terms: \n");
    scanf("%d",&n);
    printf("Enter %d numbers\n", n);
    for ( c = 0 ; c < n ; c++ )
        scanf("%d",&a[c]);
    printf("Enter the search key value: \n");
    scanf("%d",&s);
    for ( c = 0 ; c < n ; c++ )
    {
        if ( a[c] == s )
        {
            printf("%d is present at location %d.\n", s, c+1);
            break;
        }
    }
    if ( c == n ){
        printf("%d is not present in array.\n", s);
}
getch();
    return 0;
}