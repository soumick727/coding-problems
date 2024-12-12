// Wap to take input of a string
// After that print the character which occurred maximum time with in the string
#include <stdio.h>
#include <string.h>

int occurMaximum(char* str)
{
    int count[256] = {0};
    int max = 0;
    int result;
    for(int i=0; str[i]!='\0'; i++)
    {
        count[(int)str[i]]++;
        if(count[(int)str[i]]>max)
        {
            max = count[(int)str[i]];
            result = str[i];
        }
    }
    return result;

}
int main()
{
    char str[]="Andaman and nicobar island";
    printf("maxium occuring character %c\n", occurMaximum(str));
}