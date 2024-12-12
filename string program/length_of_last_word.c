#include <string.h>
#include <stdio.h>

int lengthOfLastWord(char* str)
{
    int len = strlen(str);
    int count = 0;
    int i=len-1;
    
    while(i>=0 && str[i]!=' ')
    {
        i--;
        count++;
    }
    return count;
}

int main()
{
    char str[]="hello world my name is soumick";
    printf("The length of the last word in the string: %d ",lengthOfLastWord(str));
}