#include <stdio.h>
#include <string.h>

int word_occur(char* str[],int n)
{
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[j]==str[i])
            {
                printf("%s\t", str[i]);
                break;
            
            }
        }
    }
    return 0;
}
int main()
{
    char* str[]={"world","one","hello","hello","one"};
    int n = sizeof(str) / sizeof(str[0]);
    word_occur(str, n);
}