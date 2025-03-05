#include<stdio.h>

int main(){
    int a=12,b=13;
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("Addition of A and B using Call by Value : %d",a+b);
    printf("\nAddition of A and B using Call by Reference : %d",*ptr1+*ptr2);
    return 0;
}