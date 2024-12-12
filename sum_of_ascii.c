// You have a String(all lower case characters) and you need to compute Sum(i * func(str[i])). Where func(str[i]) gives the reverse ASCII and is calculated as 123 - ASCII(str[i]) Input: abca Output: 252 Explanation: 1×26+2×25+3×24+4×26=252

#include <stdio.h>
#include <string.h>

// int func(int str[],int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         str[i] = 123 - (int)str[i];
//         printf("%d ", str[i]);
//     }
// }
int main()
{
    char str[] = "abca";
    int sum = 0;
    int n = strlen(str);
    for(int i = 0; i < n; i++)
    {
        sum += (i+1)*(123 - (int)str[i]);
    }
    printf("%d ", sum);
} 