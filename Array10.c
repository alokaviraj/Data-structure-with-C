//sort the array
#include <stdio.h>
void sort();
void main()
{
    sort();
}
void sort()
{
    int a[50],size,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the elements of array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
      printf("your array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nthe sorted array in Acending order is\n");
    // for (int i = 4; i >= 0; i--) //for decending order
    for (int i = 0; i < size; i++)   //for acending order
    {
        printf("%d\t", a[i]);
    }
}