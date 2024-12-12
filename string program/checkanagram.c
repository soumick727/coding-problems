#include <stdio.h>
#include <string.h>


void sort(char* str)
{
    int len = strlen(str);
       for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(str[j] > str[j+1])
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }       
    }
}
void anagram(char* str1, char* str2)
{
    int len = strlen(str1); 
    int len2 = strlen(str2);
    if(strlen(str2)!=len)
    {
        printf("no");
        return;
    }
   
    sort(str1);
    sort(str2);

    if(strcmp(str1, str2)==0)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}
int main()
{
    char str1[]="listen";
    char str2[]="silents";
    anagram(str1,str2);
}