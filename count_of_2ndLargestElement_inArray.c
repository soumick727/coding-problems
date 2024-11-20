#include <stdio.h>

int countSecondLargest(int* a,int n)
{
    if(n==0) return 0;
    int secondLargest = 0;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>a[i-1])
        {
            secondLargest = a[i-1];
            break;
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==secondLargest) count++;
    }
    return count;
}
int main()
{
    int A[]={1,2,3,4,4,4,5,5,5};
    int n = sizeof(A)/sizeof(A[0]);
    int secondLargestCount = countSecondLargest(A, n);
    printf("The second largest number appears %d times in the array.\n", secondLargestCount);
}