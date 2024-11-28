
#include <stdio.h>

int main()
{
    int num,fact = 1;
    
    printf("enter the number: ");
    scanf("%d",&num);
    
    if(num<0){
        printf("this is not a positive integer!");
    }
    else{
        for(int i=1; i<=num; i++){
            fact = fact*i;
        }
    }
    
    printf("factroial of %d is : %d",num,fact);

    return 0;
}
