#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="aabbabbcc";
    transformString(str);
    printf("%s\n",str);
}
void transformString(char* str)
{
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]=='a')
        {
            str[i] = 'b';
        }
        else if(str[i]=='b')
        {
            str[i] = 'a';
        }
    }
    return str;
}