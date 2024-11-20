#include <stdio.h>
void fibonacci(int n)
{
    int a = 0 ;
    int b = 1 ; 
    printf("%d ",a);
    printf("%d ",b);
    for(int i = 0; i < n-2; i++){
       int c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}
int main()
{
    int n=8;
    fibonacci(n); 
}