#include <stdio.h>
void main()
{
    int a[50], size, i, j, temp = 0;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the elements of array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("new array is");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nmaximum no in array");
    for (i = 0; i < size; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    printf("%d", a[0]);
}
