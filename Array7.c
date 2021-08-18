// Length of array
#include<stdio.h>
void main(){
    int s[]={1,2,3,4,5,6};
    //arraySize means size in bytes
      int arraySize=sizeof(s);
      //int size means size in bytes  
      // 1 integer takes 4 bytes
      int intSize=sizeof(s[0]);
    //   length = sizeof(array)/sizeof(array[integer])
      int length=arraySize/intSize; 
       printf("total number of bytes taken by array = %d\n",arraySize);
       printf("1 integer size in byte = %d\n",intSize);
       printf("Length of array = %d",length);
}