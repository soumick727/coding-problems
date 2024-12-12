// Wap to print following pattern
// For n lines
// Sample input
// 5
// Output
// 0
// 0 1
// 0 1 1
// 0 1 1 2
// 0 1 1 2 3

#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <=n; i++) {
        int a=0,b=1,c;
        for (j = 1; j <= i; j++) {
            if(j==1)
            {
                printf("%d ", a);
            }
            else if(j==2)
            {
                printf("%d ", b);
            }
            else{
                 c = a + b;
                printf("%d ", c);
               
                a = b;
                b = c;
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;

}