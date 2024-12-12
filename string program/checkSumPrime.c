// Question 2:

// A googly prime number is defined as a number that is derived from the sum of its
// individual digits. For example, if N = 43, the sum of its individual digits is 4+3 = 7,
// which is prime making it a googly prime number.

// Your task is to find whether the current number is googly prime number or not.

// Input:
// 43

// Output :
// Yes
#include <stdio.h>

int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 0;
    for ( i = 2; i * i <= num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int isGooglyPrime(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return isPrime(sum);
   
    
}
int main()
{
    int n=33;
     if (isGooglyPrime(n))        
    {   
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}