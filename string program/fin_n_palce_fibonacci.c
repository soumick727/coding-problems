#include <stdio.h>

int fibonacci(int n)
{
    if(n<1)
    {
        return 0;
    }
    else if(n==1)
    {  
         return 1;
    }
    int a=0;
    int b=1;
    int c;
    for(int i=2; i<=n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int r= fibonacci(n);
    printf("The %dth term of Fibonacci series is: %d\n", n, r);
}