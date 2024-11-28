
#include <stdio.h>

int main()
{
    
    int size, f1=0, f2=1, fn;
    
    printf("enter the size: ");
    scanf("%d",&size);
    
    for(int i=1; i<=size; i++){
        printf("%d ",f1);
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    return 0;
}