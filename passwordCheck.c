#include <stdio.h>
#include <string.h>
int main()
{
    char password[100];
    printf("Enter a password: ");
    scanf("%s", password);
    printf("the output is=%d\n",CheckPassword(password));
}
int CheckPassword(char str[])
{
    int  length = strlen(str);
    int cap = 0, number=0;
    if(length<4)
    {
        return 0;
    }
    if(str[0]>='0' && str[0]=='9')
    {
        return 0;
    }
    for(int i=0;i<length;i++)
    {
        if(str[i]=='/'||str[i]==' ')
        {
            return 0;
        }
        if(str[i]>='A'&& str[i]<='Z')
        {
            cap++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
    }
    return cap>0 && number>0;
}