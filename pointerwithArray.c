#include<stdio.h>

int main(){
    int length;
    printf("Enter Length of Array : ");
    scanf("%d",&length);
    int arr[length];
    int *ptr;
    ptr = &arr;//&arr[0]
    // printf("Address of Array : %u",&arr);
    // printf("\nValue of PTR: %u",ptr);
    for (int i = 0; i < length; i++)
    {
        printf("Enter the Value of Element Arr[%d] : ",i);
        scanf("%d",(ptr+i));
    }
    printf("\nArray is  : ");
    for (int i = 0; i < length; i++)
    {
        printf("\t %d",*(ptr+i));
    }
    return 0;
}
// [11,12,13]
