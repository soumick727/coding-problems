#include <stdio.h>
int main()
{
    int arr[] = {0,1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        arr[i] = arr[i] + 1;
    }
}