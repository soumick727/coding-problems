// Wap to take input of a string
// Then take input one integer value
// Then delete that position character from the string and print the updated string
// Input
// debanjan
// 3
// Output
// deanjan
#include <string.h>
#include <stdio.h>

int  delete_char(char* str,int n)
{
    int length = strlen(str);
    if(n>=0 && n<length)
    {
        for(int i=n; i<length; i++)
            str[i] = str[i+1];
        str[length-1] = '\0';
    }
    else
        printf("Invalid index\n");
}
int main()
{
    int n=2;
    char str[]="soumick";
    printf("Original string: %s\n",str);
    delete_char(str, n);
    printf("Updated string: %s\n",str);
}
