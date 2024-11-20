#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
int abs_diff(char a, char b) {
    return abs(a - b);
}
char find_nearest_good_char(char c, char *good_string, int len, char prev_good_char) {
    int min_distance = INT_MAX;
    char nearest_char = good_string[0];
    for (int i = 0; i < len; i++) {
        int distance = abs_diff(c, good_string[i]);
        if (distance < min_distance) {
            min_distance = distance;
            nearest_char = good_string[i];
        } else if (distance == min_distance) {
            if (abs_diff(prev_good_char, good_string[i]) < abs_diff(prev_good_char, nearest_char)) {
                nearest_char = good_string[i];
            }
        }
    }
    return nearest_char;
}

int calculate_total_distance(char *name, char *good_string) {
    int total_distance = 0;
    int good_len = strlen(good_string);
    char prev_good_char = good_string[0];

    for (int i = 0; name[i] != '\0'; i++) {
        if (strchr(good_string, name[i]) == NULL) {
            char nearest_char = find_nearest_good_char(name[i], good_string, good_len, prev_good_char);
            total_distance += abs_diff(name[i], nearest_char);
            prev_good_char = nearest_char;
        }
    }
    return total_distance;
}

int main() {
    char good_string[] = "(@HR*i{kcQl";
    char name[]= "Vyom";
    good_string[strcspn(good_string, "\n")] = '\0';
    name[strcspn(name, "\n")] = '\0';

    int result = calculate_total_distance(name, good_string);
    printf("%d\n", result);

    return 0;
}
