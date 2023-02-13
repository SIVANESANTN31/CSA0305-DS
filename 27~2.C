#include <stdio.h>
#include<conio.h>
int main()
{
    int arr[100];
    int i, item, pos, size;
    int ch,l,key;
    printf("\n\nHow many elements in array: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n ",size);
    for (i = 0; i < size; i++)
	scanf("%d",&arr[i]);
    printf("Array elements : ");
    for (i = 0; i < size; i++)
	printf("%d ", arr[i]);
    printf("\n");
	printf("\t Array Operation...!\n ");
      printf("\tMenu");
      printf("\n------------------------------\n");
      printf("1. Insert element \n");
      printf("2. Delete element \n");
      printf("3. Display queue\n");
      printf("4. Exit\n");
      printf("------------------------------\n");
      while (1)
      {
	    printf("\nChoose operation : ");
	    scanf("%d", &ch);
	    switch(ch)
	    {
    case 1:{
    printf("Array before insertion: ");
    for (i = 0; i < size; i++)
	printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);
    size++;
     for (i = size-1; i >= pos; i--)
	arr[i] = arr[i - 1];

    arr[pos - 1] = item;
    printf("Array after insertion: ");

    for (i = 0; i <=l; i++)
	printf("%d ", arr[i]);
    printf("\n");
 l = size+1;
getch();
			break;
}
case 2:
{
 printf("\nArray before Deletion: ");
    for (i = 0; i < size; i++)
	printf("%d ", arr[i]);
    printf("\n");
 key;
  printf("Enter element to delete: ");
    scanf("%d",&key);
    for(i = 0; i < size; i++)
    {
	if(arr[i] == key)
	{
	    pos = i;
	    break;
	}
    }
    if(pos != -1)
    {
	for(i = pos; i < size - 1; i++)
	    arr[i] = arr[i+1];
	printf("Array after deletion: ");
	for(i = 0; i < size - 1; i++)
	    printf("%d ",arr[i]);
    }
    else
	printf("Element Not Found\n");
getch();
			break;
}
case 3:{
 printf("Array elements : ");
    for (i = 0; i < size ; i++)
	printf("%d", arr[i]);
    printf("\n\n");
getch();
   break;
}
case 4:{
exit(1);}
 default:{
 printf("Invalid operation \n");}
	    }
      }
return 0;
}