//array declaration by user input
#include <stdio.h>
void main(){
    int i=0;
    int arr[5];
    printf("enter your array values\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("your values are ");
    for(i=0;i<5;i++){
    printf("%d\t",arr[i]);}
}