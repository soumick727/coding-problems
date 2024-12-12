#include <stdio.h>
#include <string.h>

void printFirstKWord(char* str, int n);
int main()
{
    char str[]="this is a string";
    int n;
    printf("Enter the number of words to print: ");
    scanf("%d", &n);
    printFirstKWord(str, n);
}

void printFirstKWord(char* str, int n)
{
    int count = 0;
    int len=strlen(str);
    char* token = strtok(str," ");
    while(token != NULL && count < n){
        printf("%s ", token);
        token = strtok(NULL, " ");
        count++;
    }
    
}

