#include <stdio.h>
#include <string.h>
int count_char(char st[])
{
    int n = strlen(st);
    int visited[256] = {0};
    for(int i = 0; i < n; i++)
    {
        if(!visited[(unsigned char)st[i]]){
             int count = 0;
            for(int j = 0; j < n; j++)
                {
                    if(st[i] == st[j])
                        count++;
                }
                printf("%c%d", st[i], count);
        visited[(unsigned char)st[i]] = 1;
        }
        
        
    }
 
}
int main()
{
    char st[] = "aabbbbeeeeffggg";
    count_char(st);
}

  