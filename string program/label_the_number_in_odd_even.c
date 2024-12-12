#include <stdio.h>

int markEvenOdd(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    markEvenOdd(arr, n);
}