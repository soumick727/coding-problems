// The String Decoder :

// You are provided with a string which has a sequence of 1s and Os. This sequence is
// the encoded version of a english word. You are supposed to write a program to
// decode the provided string and find the original word.

// Each Alphabet is representing by a sequence of 1s.

// A:1
// B:11
// c:111
// D:1111
// E—:11111
// F:111111
// And so on upto Z having 26 Is.

// The sequence of 1s in the encoded form are separated by single 0 which helps to
// distinguish between 2 letters.

// Note :
// Input String will always be in uppercase

// Example 1:
// 101101110

// Ans : ABC
#include <stdio.h>
#include <string.h>

int string_decoder(const char * str)
{
    int len = strlen(str);
    int count=0;
    for(int i=0; i<len; i++)
    {
        if(str[i]=='1')
        {
            count++;
        }
        else if(str[i]=='0'){
            if(count>0)
            {
                printf("%c", 'A'+count-1);
                count=0;
            }
        }
    }

        // Print the last character if the string ends with '1's
        if (count > 0) {
            printf("%c", 'A' + count - 1);
        }
        printf("\n"); 
}

int main()
{
    char str[]="10110111";
    string_decoder(str);
}
