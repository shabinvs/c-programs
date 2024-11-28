
#include <stdio.h>

int main()
{
    int num;
    
    printf("enter the number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n",i,num,i*num);
    }

    return 0;
}