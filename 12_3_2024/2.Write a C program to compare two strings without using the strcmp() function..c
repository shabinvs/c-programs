
#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[50],arr2[50];
    
    printf("enter the first string: ");
    fgets(arr1, sizeof(arr1), stdin);
    
    printf("enter the 2nd string: ");
    fgets(arr2, sizeof(arr2), stdin);
    
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    
    if(arr1[len1-1]=='\n'){
        arr1[len1-1]='\0';
    }
    
    if(arr2[len2-1]=='\n'){
        arr2[len2-1]='\0';
    }
    
    int i=0;
    while(arr1[i] != '\0' && arr2[i] != '\0'){
        if(arr1[i] != arr2[i]){
            break;
        }
        i++;
    }

    if(arr1[i]=='\0'  && arr2[i]=='\0'){
        printf("this strings are same.");
    }
    else{
        printf("this strings are not same");
    }

    return 0;
}
