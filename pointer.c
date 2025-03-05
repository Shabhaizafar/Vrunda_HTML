// // Pointer : 
// A pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, it holds the address where the value is stored in memory.


// There are 2 important operators that we will use in pointers concepts i.e.
// Dereferencing operator(*) used to declare pointer variable and access the value stored in the address.
// Address operator(&) used to returns the address of a variable or to access the address of a variable to a pointer.
#include<stdio.h>
int main(){
    int a;
    int b=13;
    int *ptr;
    printf("Enter the Value of a : ");
    scanf("%d",&a);  //a
    ptr = &a;
    printf("Value of A : %d",a);
    printf("\nAddress of A(using Modulo P) : %p",&a);
    printf("\nAddress of A(using Modulo U) : %u",&a);
    // printf("\nAddress of A(using Modulo U) : %u",&b);

    printf("\nValue of Ptr(using Modulo P) : %p",ptr);
    printf("\nValue of Ptr(using Modulo U) : %u",ptr);

    printf("\nValue of A Using de-referencing : %d",*ptr);
    return 0;
}