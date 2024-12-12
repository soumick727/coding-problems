#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int l = strlen(str);
    for(int i=l-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
}