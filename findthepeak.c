#include <stdio.h>
int main()
{
    printf("Enter the the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = findMaximum(arr, n);
    printf("The maximum element in the array is: %d\n", max);
}
int findMaximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}