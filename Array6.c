//reverse the array
#include<stdio.h>
int reverse();
void main(){
    reverse();
}
int reverse(){
    int a[5]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        printf("%d\n",a[i]);
    }
return 0;
}