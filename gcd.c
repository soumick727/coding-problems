#include <stdio.h>
int gcd(int x, int y)
{
    while(y!=0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
 
}