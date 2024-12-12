#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    countVowelConsonentSpace(str); 
}
int countVowelConsonentSpace(char str[])
{
    int vowelCount = 0;
    int consonentCount = 0;
    int spaceCount = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vowelCount++;
        }
        else if(c>='a'&&c<='z'){
            consonentCount++;
        }
        else if(c == ' '){
            spaceCount++;
        }
    }
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonentCount);
    printf("Number of spaces: %d\n", spaceCount);
}