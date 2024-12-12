// Wap in c
// To print frequency of each character of a string
// Without using any string library function
// Sample input
// india
// Output
// i 2
// n 1
// d 1
// a 1

#include <stdio.h>
#include <string.h>

int charOccur(char* str)
{
    int count[256]={0};
    for(int i=0; str[i]!='\0'; i++)
    {
        count[(int)str[i]]++;
       
    }
    for(int i=0; str[i]!='\0'; i++)
    {
        if(count[(int)str[i]]!=0)
        {
            printf("%c %d\n",str[i],count[(int)str[i]]);
            count[(int)str[i]]=0; // reset the count of the character
        }
    }
}
int main()
{
    char str[]="india";
    charOccur(str);

}