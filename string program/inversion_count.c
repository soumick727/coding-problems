// Inversion count in array
// Problem statement
// Let j and k be two indices in an array A.
// If j < K and A[j] > A[k], then the pair (j,k) is known as an “Inversion pair”.
// You are required to implement the following function:
// int InversionCount(int *A, int n);
// The function accepts an array ‘A’ of ‘n’ unique integers as its argument. You are required to
// calculate the number of ‘Inversion pair’ in an array A, and return.
// Note:
// If ‘A’ is NULL (None in case of python), return -1
// If ‘n’ <2, return 0
// Example:
// Input:
// A: 1 20 6 4 5
// n: 5
// Output:
// 5
// Explanation:
// The inversion pair in array A are (20,6),(20,4),(20,5),(6,4) and (6,5), the count of the inversions are
// 5, hence 5 is returned.

#include <stdio.h>

int InversionCount(int *A,int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[]={13, 10, 9, 6, 21, 15, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = InversionCount(arr, n);
    printf("Inversion Count: %d\n", result);
}