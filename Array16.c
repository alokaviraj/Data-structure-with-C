//insert element in array at  position first but the previous data in orderd form.
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
    printf("your value inserted at position first;\n");
    pos=1;
    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=n;
    size++;
    printf("new array is");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
}