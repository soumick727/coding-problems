#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "adaoas";
    int n = strlen(str);
    for(int i = 0;i<n;i++)
    {
        int count = 0;
        int ch = str[i];
        for(int j = 0;j<n;j++)
        {
            if(str[j]==ch && j%2==0)
            {
                count++;
            }
        }
        if(count<3)
        {
            printf("0");
            break;
        }
        else
        {
            printf("1");
            break;
        }

    }
}