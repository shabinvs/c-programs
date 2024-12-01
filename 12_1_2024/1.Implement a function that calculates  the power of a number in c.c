
#include <stdio.h>

int power(int, int);

int main()
{
    int num1, num2;
    
    printf("enter the number: ");
    scanf("%d",&num1);
    
    printf("enter the power: ");
    scanf("%d",&num2);
    
    int answer = power(num1, num2);
    
    printf("%d to the power of %d : %d",num1,num2,answer);
    

    return 0;
}

int power(int a, int b){
    
    int result = 1;
    
    for(int i=1; i<=b; i++){
        result = result * a;
    }
    
    return result;
}