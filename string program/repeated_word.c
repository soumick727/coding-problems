#include <stdio.h>
#include <string.h>

int repeatedWords(const char * str)
{
    int l = strlen(str);
    char words[]="";
    for(int i = 0; i < l; i)
    {
        if(isalpha(str[i]))
        {
            strcat(words, str[i]);
        }
    }
}
int main()
{
    char str[]="cat batman latt cat matt not matt";
    printf("the repeated words are: %s\n",repeatedWords(str));
}