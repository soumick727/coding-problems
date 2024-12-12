// Wap to print following pattern
// Sample input
// 5
// Output
// ABCDE
// ABCD
// ABC
// AB
// A
// AB
// ABC
// ABCD
// ABCDE

#include <stdio.h>

void printPattern(int n)
{
    // Print the first half of the pattern
    for (int i = n; i > 0; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    // Print the second half of the pattern
    for (int i = 2; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
