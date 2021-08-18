//insert element in array at any position and the value of that position is shown in last
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
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nenter data for you want to insert");
    scanf("%d", &n);
    printf("\nenter the position you want to insert");
    scanf("%d", &pos);
    if (pos > size || pos < 1)
    {
        printf("position out of array");
    }
    else
    {
        a[size] = a[pos - 1];
        a[pos - 1] = n;
        size++;
        printf("new array is");
        for (i = 0; i < size; i++)
        {
            printf(" %d", a[i]);
        }
    }
}