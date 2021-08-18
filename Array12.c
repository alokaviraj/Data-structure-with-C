// insertion in array at any position without missing the sequence.
#include <stdio.h>
void main()
{
    int a[50], i, size, n, pos;
    printf("enter the size of array");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("array size overflow");
    }
    else
    {
        printf("enter the elements of array");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("your array is ");
        for (i = 0; i < size; i++)
        {
            printf(" %d", a[i]);
        }
        printf("\nenter data you want to insert = ");
        scanf("%d", &n);
        printf("enter the position to insert = ");
        scanf("%d", &pos);
        if (pos > size+1 || pos<1 )
        {
            printf("position out of array");
        }
        else
        {
            for (i = size - 1; i >= pos - 1; i--)
            {
                a[i+1] = a[i];
            }
            a[pos - 1] = n;
            size++;
            printf("new array is ");
            for (i = 0; i < size; i++)
            {
                printf(" %d", a[i]);
            }
        }
    }
    int len = sizeof(a) / sizeof(a[0]);
    printf("\nlength of array = %d", len);
}