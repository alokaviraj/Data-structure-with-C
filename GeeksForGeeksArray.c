#include<stdio.h>
int largest(int arr[],int n);
int main(){
    int arr[10];
    int i,t,n;
    scanf("%d",&t);
    while(t--){
        printf("enter the size");
        scanf("%d,&n");
        printf("enter the element");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d",largest(arr,n));
        printf("\n");
    }
}



// C function to find maximum in arr[] of size n
int largest(int arr[], int n) {
    int i;
    for(i=0;i<n;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("The largest element of given array is %d",arr[0]);
    return 0;
}