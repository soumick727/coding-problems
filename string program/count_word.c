#include <stdio.h>
#include <string.h>

int countWord(char* str)
{
    int count = 1;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' '&& str[i+1]!=' ')
        {
            count++;
        }
    }
    printf("%d words", count);
     
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    countWord(str);
}