
#include <stdio.h>

int main()
{
    int size,countOdd=0,countEven=0;
    
    printf("enter the size: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter the elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    
    printf("count of even numbers: %d",countEven);
    printf("\ncount of odd numbers: %d",countOdd);

    return 0;
}
