//insert element in array at  position last.
#include <stdio.h>
void main()
{
    int a[50], size, i, n, pos;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the elements of array :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("your array is ");
    for(i=0;i<size;i++){
    printf(" %d", a[i]);}
    printf("\nenter data for you want to insert");
    scanf("%d", &n);
    printf("your value inserted at position last;\n");
    pos=size;
    a[size] = n;
    size++;
    printf("new array is");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
}