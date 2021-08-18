// array declaration in many line

#include <stdio.h>
void main(){
    int b[5];
    b[0]=8;
    b[1]=1;
    b[2]=2;
    b[3]=3;
    b[4]=4;
    for(int i=0;i<=4;i++){
        printf("%d\n",b[i]);
    }
}