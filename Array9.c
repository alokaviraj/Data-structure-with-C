// traverse the array
#include <stdio.h>
int define();
void main()
{
    define();
}
int define()
{

    int n = 0;
    int a[10] = {22, 66, 12, 32, 41, 15, 88, 44, 51, 66};
    int len = sizeof(a) / sizeof(a[0]);
    printf("enter the index value to print the value = ");
    scanf("%d", &n);
    if (n < len)
    {

        printf("%d\n", a[n]);
    }
    else
    {

        printf("array out of bound");
    }
}