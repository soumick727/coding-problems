#include <stdio.h>

int max_region(int n)
{
    int num;
    num=n*(n+1)/2+1;
    return num;
}
int main()
{
    int n=4;
    printf("max_region is %d\n",max_region(n));
}