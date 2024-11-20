// The function def differenceofSum(n. m) accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

// Assumption:

// n>0 and m>0
// Sum lies between integral range
// Example

// Input
// n:4
// m:20
// Output
// 90

// Explanation

// Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
// Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
// Difference 150 – 60 = 90
// Sample Input
// n:3
// m:10
// Sample Output
// 19

#include <stdio.h>

int differenceOfSum(int n, int m)
{
    int sum_divisible=0;
    int sum_not_divisible=0;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)
        {
            sum_divisible+=i;
        }
        else{
            sum_not_divisible+=i;
        }
    }
    return sum_not_divisible - sum_divisible;
}
int main()
{
    int n = 3;
    int m = 10;
    printf("Difference between sum of integers not divisible by %d and sum of integers divisible by %d is %d\n", n, n, differenceOfSum(n, m));
}