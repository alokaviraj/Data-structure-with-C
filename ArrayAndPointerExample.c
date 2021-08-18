#include<stdio.h>
void main(){
    int a[3],i;
    int *q;
    q=a;
    // printf("%p",a);
    // printf("\n%p",&a[1]);
    // printf("\n%p",a+1);
    // printf("\n%p",&a);
    // printf("\n%p",&a+1);
    // printf("%p",*a);
    // printf("\n%p",*a+1);
    // printf("\n%p",*(a+1));

    // printf("%d",*q);
    // printf("\n%p",&*q);
    // printf("\n%p",q);

// print array using pointer

for(i=0;i<3;i++){
    scanf(" %d",&q[i]); //storing value using pointer or use &a[i] ,(a+i),(i+a),&q[i]
}
for(i=0;i<3;i++){
    printf(" %d",q[i]); //print value using pointer or use a[i] , *(a+i),*(q+i),q[i],i[q]
}


}