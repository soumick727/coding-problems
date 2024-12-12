//input1: thunder
//input2: {puzzle,thunder,powder,blender,under}
//input3: 5
//output:3

#include <stdio.h>
#include <string.h>

int string_cmp(char* str1, char* str2)
{
   int len = strlen(str1);
   int len1 = strlen(str2);
   if(len<3 || len1<3)
   {
    return 0;
   }
   return strcmp(&str1[len-3],&str2[len1-3])==0;
}

int count_words(char* str1, char* str2[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(string_cmp(str1,str2[i]))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str1[]="thunder";
    char* str2[]={"blunder","plunder","hajim"};
    int n = sizeof(str2)/sizeof(str2[0]);
    int count = count_words(str1, str2, n);
    printf("%d\n", count);
}