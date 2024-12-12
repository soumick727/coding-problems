#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int f=0;
    int l = strlen(str);
    for(int i=l-1;i>=0;i--){
        if(str[i]!=str[l-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==1){
        printf("The string is not  a palindrome.");
    }
    else{
        printf("The string is a palindrome.");
    }

}