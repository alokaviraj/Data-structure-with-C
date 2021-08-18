// insert value of array at given position by given array
#include <Stdio.h>
int pos(); // function declaration
void main()
{
    pos();
}

int pos()
{ // function execution
    int i = 0;
    int arr[10] = {1, 2, 3, 4, 5};
    arr[5] = arr[0]; // insert at position
    arr[6] = 6;
    arr[7] = 7;
    arr[8] = 8;
    arr[0] = 7; // insert at begining
    arr[9] = 9; //insert at last
    arr[10]=10;
    arr[11]=11;
    for (i = 0; i <=11; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}