
#include <stdio.h>

void factors(int);

int main()
{
    int num;
    
    printf("enter the number: ");
    scanf("%d",&num);
    
    factors(num);

    return 0;
}

void factors(int a){
    
    for(int i=1; i<=a/2; i++){
        if(a%i==0){
            printf("%d ",i);
        }
    }
    
}