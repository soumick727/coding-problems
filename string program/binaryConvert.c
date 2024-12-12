#include <stdio.h>
#include <string.h>

int binaryconvert(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    char ans[256]="";
    int i=0;
    while(n>0)
    {
        ans[i++] = n%2;
        n = n / 2;
    } 
    for(int j=i-1;j>=0;j--) 
    {
        printf("%d", ans[j]);
    } 
}
int main()
{
    int n=10;
    binaryconvert(n);
}