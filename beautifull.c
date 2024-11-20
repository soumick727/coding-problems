#include <stdio.h>

int min_swap_to_beautiful(int array[], int n);

int main() {
    int n, result, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    result = min_swap_to_beautiful(array, n);
    printf("result = %d\n", result);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int count_swaps(int arr[], int n, int ascending) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
                swaps++;
            }
        }
    }
    return swaps;
}

int min_swap_to_beautiful(int array[], int n) {
    int arr_asc[n], arr_desc[n];
    for (int i = 0; i < n; i++) {
        arr_asc[i] = array[i];
        arr_desc[i] = array[i];
    }

    int count_asc = count_swaps(arr_asc, n, 1);
    int count_desc = count_swaps(arr_desc, n, 0);

    return count_asc < count_desc ? count_asc : count_desc;
}
