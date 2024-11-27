
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
    
    int found = 0;
    
    for(i=0; i<size; i++){
        if(f[arr[i]]>size/2){
            printf("number %d : %d\n",arr[i],f[arr[i]]);
            found = 1; 
            f[arr[i]]=0;
        }
    }
    
    if(found == 0){
        printf("no elements");
    }
    
    return 0;
}