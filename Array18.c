// sum of array element
#include<stdio.h>
void main(){
    int a[50],size,i,n=0;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("new array is");
    for(i=0;i<size;i++){
        printf(" %d",a[i]);
    }
    for(i=0;i<size;i++){
        n=n+a[i];
    }
    printf("\nsum of array = %d",n);
    
}