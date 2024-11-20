#include <stdio.h>

int isMagical(int n);
int countMagical(int n);
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int result = countMagical(n);
    printf("Number of magical numbers: %d\n", result);
    return 0;
}

int isMagical(int n){
    int sum = 0;
    while (n > 0){
        int digit = n%2;
        sum += (digit == 0) ? 1:2;
        n /= 2;
    }
    return sum % 2 != 0;
}

int countMagical(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(isMagical(i)){
            count++;
        }

    }
    return count;
}