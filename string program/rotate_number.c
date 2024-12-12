//wap with a function rotate(arr[],d,n) that rotates arr[] of size n by d elements.
//input format:
//n = 5
//array[] = 1 3 5 7 9
//d = 2
//output format:
//array[] = 7 9 1 3 5


#include <stdio.h>

// Function to rotate an array by d elements
void rotate(int arr[], int d, int n) {
    int temp[n];

   
    d = d % n;

   
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d + 1) % n];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

   
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &d);

    rotate(arr, d, n);

    return 0;
}
