// print the array value with help of function
#include<stdio.h>
int ageOfStudent(int a, int b);
int height(int c,int d);
void main(){
    int arr[10]={10,9,8,7,15,18,7,25,21,14};
    ageOfStudent(arr[2],arr[3]); //calling of function
    height(arr[0],arr[9]);
}
int ageOfStudent(int a, int b){ //initializing of function
 printf("%d\n %d \n",a,b); 
}
int height(int c,int d){       //initializing of function
    int z[5]={1,2,3,4,5};
    ageOfStudent(z[2],z[3]);   //calling of function with different values
    printf("%d\n %d",c,d);
}