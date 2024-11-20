#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int superior = SuperiorElements(arr,n);
    printf("Number of superior elements: %d\n", superior);
}

int SuperiorElements(int* arr,int n)
{
    int superior = arr[n-1];
    int count = 1;
    for(int i=n-2;i>=0;i--){
        if(arr[i] > superior){
            count++;
            superior=arr[i];
            
        }
    }
    return count;
}