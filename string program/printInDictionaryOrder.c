// Input Valuees: 
// T=2

// p=polikujmnhytgbvfredcxswqaz   or p= qwryupcsfoghikldezvxbintma
// s=abcd                            s=ativedoc

// Output Values:            
// bdca                           or codevita
#include <stdio.h>
#include <string.h>
int main()
{
    char p[] = "qwryupcsfoghikldezvxbintma";
    char s[] = "ativedoc";
    int n=strlen(p);
    int m = strlen(s);
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            if(p[i]==s[j])
            {
                printf("%c",s[j]);
                break;
            }
        }
    }
}