#include <stdio.h>
#include <string.h>

int nWord(char* str, int k);

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int k;
    printf("Enter the number of words to print: ");
    scanf("%d", &k);
    int l=strlen(str);
    for(int i=0; i<l; i++)
    {
        printf("%c", str[i]);
    }
    nWord(str, k);
}

 int nWord(char* str, int k)
 {
    int l=strlen(str);
    int count=0;
    for(int i=0; i<l; i++)
    {
        if(str[i]==' ')
        {
            count++;
            if(count==k)
            {
                printf("%c", str[i]);
            }
        }
    }
 }