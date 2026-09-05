#include <stdio.h>

int main()
{
    int i,arr[100],n;

    printf("enter the value of n : ");
    scanf("%d" , &n);
    printf("n is : %d  \n ", n);

    printf(" enter values of array : ");

    for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    };
    
    printf(" array :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    

    return 0;
}