// delete element fromm array
#include <stdio.h>
void main()
{
    int a[50], size, i, n, pos;
    printf("enter the size of array");
    scanf("%d", &size);
    if (size < 1)
    {
        printf("size less than one");
    }
    else if (size > 50)
    {
        printf("size greater than defined array");
    }
    else
    {
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
        printf(" \ninserted the position! you want to delete value\n");
        scanf("%d", &pos);
        if (pos > size || pos < 1)
        {
            printf("position out of array");
        }
        else
        {
            for (i = pos-1; i < size-1; i++)     // size or size-1 only take difference in time complexity
            {
                a[i] = a[i+1];
            }
            size--;
            printf("new array is");
            for (i = 0; i < size; i++)
            {
                printf(" %d", a[i]);
            }
        }
    }
}