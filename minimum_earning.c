// Function Description:

// Complete the function with the following parameters:

// Name	            Type	                      Description
// N	           Integer	                     How many Books he has to buy that day.
// EarnArray[ ]	  Integer array	             Array of his earnings for the ith book
// CostArray[ ]	  Integer array	            Array of the actual cost of the ith book.
// Constraints:

// 1 <= N <= 10^3
// 1 <= EarnArray[i] <= 10^3
// 1 <=  CostArray[i] <= 10^3
// Input Format:

// First line contains N.
// Second N lines contain The ith earning for the ith book.
// After that N lines contain The cost of the ith book.
// Output Format: The minimum money he needs to cover the total expense.

// Sample Input 1:

// 3

// [3 4 2]

// [5 3 4]

// Sample Output 1:

// 3

// Explanation:

// At first he buys the 2nd book, which costs 3 rupees, so he saves 1 rupee. Then he buys the 1st book, that takes 2 rupees more. So he spends his stored 1 rupee and hence he needs 1 rupee more. Then he buys the last book.
#include <stdio.h>

int minCostToBuyVooks(int n, int e[], int c[])
{
    int totalearn = 0;
    int totalcost = 0;
    for(int i=0;i<n;i++)
    {
        totalearn += e[i];
        totalcost += c[i];
    }
    return totalcost - totalearn;  // minimum money he needs to cover the total expense.  // Write your code here.
}
int main()
{
    int n=3;
    int earn[]={3,4,2};
    int cost[]={5,3,4};
    printf("%d",minCostToBuyVooks(n, earn, cost));
}