
#include <stdio.h>

int sumOfEven(int);

int main()
{
    int result, range;
    
    printf("enter the range for sum : ");
    scanf("%d",&range);
    
    result = sumOfEven(range);
    printf("sum of odd numbers : %d",result);
    

    return 0;
}

int sumOfEven(int a){
    
    int i, sum = 0;
    
    for(i=1; i<=a; i++){
        if(i % 2 == 0){
            sum = sum + i;
        }
    }
    
    return sum;
}