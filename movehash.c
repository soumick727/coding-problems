// Question 1
// Problem Statement –

// You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.
// char* moveHash(char str[],int n);

// example :-
// Sample Test Case

// Input:
// Move#Hash#to#Front

// Output:
// ###MoveHashtoFront

#include <stdio.h>
#include <string.h>

void moveHash(char str[],int n)
{
    char str1[100],str2[100];
    int j,k;
    j=k=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='#')
        {
            str1[j++] = str[i];
        }
        else{
            str2[k++] = str[i];
        }
    }
    str1[j] = '\0';
    str2[k] = '\0';
    strcat(str1,str2);
    printf("%s",str1);
}
int main()
{
    char str[100] = "Move#Hash#to#Front";
    int n = strlen(str);
    moveHash(str, n); 
}