
#include <stdio.h>

int main()
{
    int size,temp;
    
    printf("enter the size: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    printf("elements after reverse: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
