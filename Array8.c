// traverse the array
#include<stdio.h>
int define();
void main(){
define();

}
int define(){
    int i=0;
    int n;
    int a[5];
    printf("enter the value of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the index value to print the value = ");
    scanf("%d",&n);
     printf("%d\n",a[n]);
}