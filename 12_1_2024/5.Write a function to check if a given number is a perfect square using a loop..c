
#include <stdio.h>

void perfectSqure(int);

int main()
{
    int num;
    
    printf("enter the number: ");
    scanf("%d",&num);
    
    perfectSqure(num);
    

    return 0;
}

void perfectSqure(int number){
    int flag = 0;
    for(int i=1; i<=number; i++){
        if((i*i)==number){
            printf("yes!..this is perfect squre");
            flag=1;
        }
    }
    
    if(flag==0){
        printf("this is not perfect squre");
    }
    
}