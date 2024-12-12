#include <stdio.h>
#include <string.h>

void replaceChars(char *str, char ch1, char ch2) {
    if (!str) {
        printf("Error: Invalid input string.\n");
        return;
    }

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch1) {
            str[i] = ch2;
        } else if (str[i] == ch2) {
            str[i] = ch1;
        }
    }
}

int main() {
    char str[] = "hello world";
    char ch1 = 'h';
    char ch2 = 'w';

    printf("Original string: %s\n", str);
    replaceChars(str, ch1, ch2);
    printf("Modified string: %s\n", str);

    return 0;
}
