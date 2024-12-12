// #krishnamurthy number 
#include <stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact *= i;
    return fact;
}
int krishnamurthy(int n){
    int sum=0,temp=n;
    while(temp!=0){
        int digit=temp%10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == n)? 1 : 0;
}
int  main()
{
    int n=145;
    if(krishnamurthy(n))
    {
        printf("%d is a Krishnamurthy number", n);
    }
    else
    {
        printf("%d is not a Krishnamurthy number", n);
    }
}