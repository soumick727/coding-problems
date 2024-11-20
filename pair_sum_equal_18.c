#include <stdio.h>

int checkPair(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] > arr[j]) && ((arr[i] + arr[j])==18))
                printf("%d,%d ", arr[i],arr[j]);
        }
    }
    return 0;
}
int main()
{
    int arr[]={12,16,6,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Pairs with sum 18: ");
    checkPair(arr, n);
}