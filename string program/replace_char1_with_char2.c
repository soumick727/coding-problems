// Given string and two characters ch1,ch2 as input , replace all occurences of ch1 with ch2 and vice versa
// input1:
// apples
// a
// p

// Output:
// paales

#include <stdio.h>
#include <string.h>

void transform(char* str, char ch1, char ch2)
{
    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        if(str[i]==ch1)
        {
            str[i]=ch2;
        }
        else if(str[i]==ch2)
        {
            str[i]=ch1;
        }
    }
    printf("Transformed string: %s\n", str);
}

int main()
{
    char str[]="codebasher";
    char ch1='c';
    char ch2='b';
    transform(str, ch1, ch2);
}