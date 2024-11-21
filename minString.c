// Problem Statement –

// Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

// Input :
// aabbbbeeeeffggg

// Output:
// a2b4e4f2g3

// Input :
// abbccccc

// Output:
// ab2c5

#include <stdio.h>
#include <string.h>

void minString(char str[], int n)
{
    
    char visited[100]={0};
    for(int i = 0; i < n; i++)
    {
        if(!visited[(unsigned char)str[i]])
        {
            int count = 0;
        for(int j=0;j<n;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
            
        }
        printf("%c%d", str[i],count);
        visited[(unsigned char)str[i]] = 1;
        }
        
    }
}
int main()
{
    char str[100] = "abbccccc";
    int n = strlen(str);
    minString(str,n);
}
