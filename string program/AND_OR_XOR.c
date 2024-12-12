#include <stdio.h>
#include <string.h>
void AND(char *s1, char *s2);
void OR(char *s1, char *s2);
void XOR(char *s1, char *s2);
int main()
{
    char s1[100];
    char s2[100];
    char operator[100];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    printf("Enter the operator to perform:");
    scanf("%s", operator);  

    if(strcmp(operator, "AND")==0)
    {
        AND(s1, s2);
    }
    else if(strcmp(operator, "OR")==0)
    {
        OR(s1, s2);
    }
    else if(strcmp(operator, "XOR")==0)
    {
        XOR(s1, s2);
    }
    else{
        printf("Invalid operator. Please enter either AND, OR, or XOR.\n");
    }
}
void AND(char *s1, char *s2)
{
    int l = strlen(s1);
    char result[101]="";
    if(strlen(s2)!=l)
    {
        printf("Error: Strings must be of the same length.\n");
        return;
    }
    for(int i=0; i<l; i++)
    {
        if(s1[i] == '1' && s2[i] == '1')
            strcat(result, "1");
        else
            strcat(result, "0");
    }
    printf("AND of the two strings: %s\n", result);
}
void OR(char *s1, char *s2)
{
    int l = strlen(s1);
    char result[101]="";
    if(strlen(s2)!=l)
    {
        printf("Error: Strings must be of the same length.\n");
        return;
    }
    for(int i=0; i<l; i++)
    {
        if(s1[i] == '1' || s2[i] == '1')
            strcat(result, "1");
        else
            strcat(result, "0");
    }
    printf("OR of the two strings: %s\n", result);
}

void XOR(char *s1, char *s2)
{
    int l = strlen(s1);
    char result[101]="";
    if(strlen(s2)!=l)
    {
        printf("Error: Strings must be of the same length.\n");
        return;
    }
    for(int i=0; i<l; i++)
    {
        if(s1[i] == s2[i])
            strcat(result, "0");
        else
            strcat(result, "1");
    }
    printf("XOR of the two strings: %s\n", result);
}
