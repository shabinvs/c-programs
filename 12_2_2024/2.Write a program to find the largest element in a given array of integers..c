
#include <stdio.h>

int main()
{
    int size,max;
    
    printf("enter the size: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
    
    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    printf("largest number in the array: %d",max);

    return 0;
}
