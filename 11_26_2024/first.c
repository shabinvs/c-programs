
#include <stdio.h>

int main()
{
    int i,size,arr[100],f[100]={0};
    
    printf("enter the size: ");
    scanf("%d",&size);
    
    printf("enter the elements: ");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0; i<size; i++){
        f[arr[i]]++;
    }
    
    for(i=0; i<size; i++){
        if(f[arr[i]]==2){
            printf("numbers : %d\n",arr[i]);
            f[arr[i]]=0;
        }
    }

    return 0;
}