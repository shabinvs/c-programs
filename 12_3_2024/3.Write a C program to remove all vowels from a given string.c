// Write a C program to remove all vowels from a given string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char arr1[100];
    
    printf("enter the string: ");
    fgets(arr1, sizeof(arr1), stdin);
    
    
    int len = strlen(arr1);
    
    for(int i=0; i<len; i++){
        if(tolower(arr1[i])=='a' ||tolower(arr1[i])=='e' ||tolower(arr1[i])=='i' ||tolower(arr1[i])=='o' ||tolower(arr1[i])=='u'){
            for(int j=i; j<len; j++){
                arr1[j] = arr1[j+1];
            }
            len--;
            i--;
        }

    }
    
    printf("%s", arr1);

    return 0;
}
