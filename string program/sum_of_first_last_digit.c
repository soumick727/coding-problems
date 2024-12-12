// Wap in c to take input of an integer...then print sum of ist and last digit
// Expected input
// 12
// Output
// 3
// Expected input
// 4567
// Output
// 11

#include <stdio.h>

int sumOfFirstLastDigit(int n)
{
    int lastDigit = n%10;
    int firstDigit = n;
    while(firstDigit > 10)
    {
        firstDigit/=10;
    }
    return lastDigit + firstDigit;
}
int main()
{
    int n=91234;
    printf("Sum of first and last digit: %d", sumOfFirstLastDigit(n));
}