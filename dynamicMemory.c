#include<stdio.h>
#include<stdlib.h> //dynamic memory : malloc,.....

// int main(){
//     int n;
//     int *ptr =  (int *) malloc(sizeof(int));
//     printf("Enter the No. Value :");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the  Value  %d : ",i);
//         scanf("%d",(ptr+i));
//     }
//     printf("\nValues with Address  : \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nAddress : %u , Value : %d",(ptr+i),*(ptr+i));
//     }
//     return 0;
// }

// int main(){
//     float *ptr = (float *) malloc(sizeof(float));
//     *ptr = 12.3;

//     printf("%u",ptr);
//     printf("\n%f",*ptr);
//     return 0;
// }

int main(){
    int n;
    printf("Enter the No. Value :");
    scanf("%d",&n);
    // int *ptr = (int *) malloc(n*sizeof(int));
    int *ptr =  malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the  Value  %d : ",i);
    //     scanf("%d",(ptr+i));
    // }
    printf("\nValues with Address  : \n");
    for (int i = 0; i < n; i++)
    {
        printf("\nAddress : %u , Value : %d",(ptr+i),*(ptr+i));
    }    
    return 0;
}

// int main(){
//     int n;
//     printf("Enter the No. Value :");
//     scanf("%d",&n);
//     int *ptr = (int *) calloc(n,sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the  Value  %d : ",i);
    //     scanf("%d",(ptr+i));
    // }
//     printf("\nValues with Address  : \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nAddress : %u , Value : %d",(ptr+i),*(ptr+i));
//     }    
//     return 0;
// }