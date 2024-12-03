
#include <stdio.h>
#include <string.h>

int main()
{
    
    char arr[100];
    
    printf("enter the string: ");
    fgets(arr, sizeof(arr), stdin);
    
    int len = strlen(arr);
    
    printf("before removing \n");
    printf("%s",arr);
    
    for(int i=0; i<len; i++){
        if(arr[i]==' '){
            for(int j=i; j<len; j++){
                arr[j]=arr[j+1];
            }
            len--;
            i--;
        }
    }
    
    
    printf("after removing: \n");
    printf("%s",arr);
    
    return 0;
}