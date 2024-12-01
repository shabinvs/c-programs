
#include <stdio.h>

int productOfDigits(int);

int main()
{
    int num1, result;
    
    printf("enter the number: ");
    scanf("%d",&num1);
    
    result = productOfDigits(num1);
    printf("product of digits are: %d",result);
    

    return 0;
}

int productOfDigits(int a){
    int product = 1;
    
    while(a>0){
        int digit = a%10;
        product = product * digit;
        a = a/10;
    }
    
    return product;
    
}