#include <stdio.h>
#include <string.h>

void replaceletter(char* str, char ch1, char ch2);

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    char ch1, ch2;
    printf("The first letter to replace: ");
    scanf(" %c", &ch1);  // Note the space before %c to skip any leading whitespace
    printf("The second letter to replace with: ");
    scanf(" %c", &ch2);

    replaceletter(str, ch1, ch2);

    return 0;
}

void replaceletter(char* str, char ch1, char ch2) {
    int l = strlen(str);
    char str2[100] = "";
    int i;

    for (i = 0; i < l; i++) {
        if (str[i] == ch1) {
            str[i] = ch2;
        } else if (str[i] == ch2) {
            str[i] = ch1;
        }
        str2[i] = str[i];
    }
    str2[l] = '\0';  // Null-terminate the string

    printf("Modified string: %s\n", str2);
}
