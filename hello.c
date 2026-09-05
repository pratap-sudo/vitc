#include <stdio.h>

int main()
{
    int i,arr[100],n,j,val;

    printf("enter the value of n : ");
    scanf("%d" , &n);
    printf("n is : %d  \n ", n);
    
    //input functionality
    printf(" enter values of array : ");
    for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    };
    
    //array printing functionality
    printf(" array :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    //bubble short 
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                val=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=val;
            }
        }
    }
    

     printf(" array :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }





    return 0;
}