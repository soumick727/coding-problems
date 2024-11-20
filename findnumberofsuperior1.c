#include <stdio.h>

int main() {
    int arr[] = {8,10,6,2,9,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = arr[size - 1]; // Initialize with the rightmost element
    int superiorCount = 1;

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            superiorCount++;
        } 
    }

    printf("Number of superior elements from the right: %d\n", superiorCount);

    return 0;
}
