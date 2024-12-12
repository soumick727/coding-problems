// Wap to identify one user given string is pallindorme or not
// Without using any string function

#include <stdio.h>
#include <string.h>

int is_palindrome(char* str)
{
    int len = strlen(str);
    int i = 0, j = len - 1;
   while (i < j) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    return 1; // Palindrome
   
}

int main()
{
    char str[]="MOMa";
    printf("Is %s a palindrome? %s\n", str, is_palindrome(str)? "Yes" : "No");
}
