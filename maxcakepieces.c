#include <stdio.h>
int main()
{
    int cuts;
    printf("Enter the number of cuts :");
    scanf("%d", &cuts);
    printf("The maximum number of cake pieces is: %d\n", maxCakePieces(cuts));
}
int maxCakePieces(int n){
    int pieces = 1 + n*(n+1)/2;
    return pieces;
}