#include <stdio.h>
#include <string.h>

// Function to find the first letter of files in alphabetical order
char* firstLetterOfFiles(char* S[], int N) {
    if (N == 0) {
        return "0"; // No elements, return "0"
    }

    // Bubble sort to sort the file names
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (S[j][0] > S[j + 1][0]) {
                char* temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }

    // Return the first letter of the first file
    return S[0];
}

int main() {
    char* files[] = {"apple.txt", "banana.txt", "cherry.txt", "date.txt"};
    int numFiles = sizeof(files) / sizeof(files[0]);

    char* result = firstLetterOfFiles(files, numFiles);
    printf("First letter of files: %s\n", result);

    return 0;
}
