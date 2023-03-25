#include<stdio.h>
int main(){

    int x=10, y=20, box;

    int *ptr1,*ptr2;

    ptr1= &x;
    ptr2= &y;

box = *ptr1;
*ptr1= *ptr2;
*ptr2= box;
    

    printf("x = %d \n", x);
    printf("y = %d \n", y);

    return 0;
}