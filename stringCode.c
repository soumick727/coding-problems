#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="soumick";
    char str1[100], str2[100];
    int n = strlen(str);
    printf("Enter the character :");
    char ch;
    int k,l;
    k=l=0;
    scanf("%c", &ch);
    for(int i=0; i<n; i++)
    {
    
        if(str[i]==ch)
        {
            for(int j=i; j<n; j++)
            {
                str1[k++] = str[j];
            }
            break;
        }
        else{
            str2[l++] = str[i];
        }
        
    }
    str1[k] = '\0';
    str2[l] = '\0';
    strcat(str1,str2);
    printf("%s", str1);
    
}