// print duplicate  element of array.
#include <stdio.h>
void main()
{
    int a[50], i, size, j;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter the elements of array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array is");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nduplicate element is");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                printf("\n%d", a[i]);
            }
           
        }
    }
}