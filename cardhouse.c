#include <stdio.h>

int noOfCards(int n) {
    return n * (3 * n + 1) / 2;
}

int main() {
    int n ;
    scanf("%d", &n);
    printf("Number of cards needed: %d\n", noOfCards(n));
    return 0;
}
