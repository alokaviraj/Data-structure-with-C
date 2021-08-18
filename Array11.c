//sort the array bye user input
#include <stdio.h>
void sort();
void main()
{
    sort();
}
void sort()
{
    int i=0,n=0;
    int a[50];
    printf("enter the length of array = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("the sorted array is\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
}