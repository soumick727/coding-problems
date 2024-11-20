#include <stdio.h>

int is3Multiple(int* a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[]={1,2};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d\n",is3Multiple(a,n));
}