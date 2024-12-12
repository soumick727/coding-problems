// Wap in c to compare two user given string values are same or not with in an user defined
// function
// If same then return 1 to main and print
// Otherwise return 0 to main and print
// Sample input
// dada
// dada
// Output
// 1
// Sample input
// Ami
// Tui
// Output
// 0

#include <stdio.h>
#include <string.h>

int string_cmp(const char *s1, const char *s2)
{
    int len=strlen(s1);
    if(len!= strlen(s2))
    {
        return 0;
    }
    for(int i=0; i<len; i++)
    {
        if(s1[i]!= s2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[] = "hello1";
    char str2[]="hello1";
    int result=string_cmp(str1,str2);
    printf("%d\n",result);
}