#include <string.h>
#include <stdio.h>

void reversed(char* str)
{
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
    return;  // No return statement in main function in C
}
int main()
{
    char str1[50] = "soumick";
    reversed(str1);
}