
#include <stdio.h>

int main()
{
    int size;
    
    printf("enter the size: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("duplicate elements : ");
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
        }
    }

    return 0;
}
