
#include <stdio.h>

int main()
{
    int prime=0,num;
    
    printf("enter a number: ");
    scanf("%d",&num);
    
    if(num<2){
        prime=1;
    }
    else{
        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                prime = 1;
                break;
            }
        }
    }
    
    if(prime==0){
        printf("this is a prime number");
    }
    else{
        printf("this is not a prime number");
    }
    
    return 0;
}

