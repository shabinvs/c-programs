
#include <stdio.h>

void swap(int*, int*);

int main()
{
    int num1, num2, *p1, *p2, temp;
    
    printf("enter the first number: ");
    scanf("%d",&num1);
    
    printf("enter the second number: ");
    scanf("%d",&num2);
    
    printf("before swap\nnumber 1: %d\nnumber 2: %d\n",num1,num2);
    
    p1 = &num1;
    p2 = &num2;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("after swap\nnumber 1: %d\nnumber 2: %d",num1,num2);
    
    return 0;
}

