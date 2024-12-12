#include <stdio.h>
#include <string.h>
int lower_upper(char* str)
{
    int upp_count = 0;
    int low_count = 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            upp_count++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            low_count++;
    }
    if(upp_count>low_count)
    {
        for(int i=0; i<=strlen(str); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        printf("%s\n", str);
        return 1;
    }
    if (low_count>upp_count)        
    {
        for(int i=0;i<=strlen(str);i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        printf("%s\n", str);
        return 1;
    }
    //   printf("%s\n", str);
    //     return 1;
    
}
int main()
{
    char str[]="abCdE";
    lower_upper(str);
   
}