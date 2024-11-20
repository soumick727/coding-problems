#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n>=10)
    {
        if(n%2==0)
        {
            n=(n-2)/2;
            
        }
        else{
            n=n/2;
        } 
    }
        
        
        printf("the number after converting to single digit: %d",n);

}