#include <stdio.h>
#include <math.h>
int main()
{
    int binary;
    printf("Enter a binary number: ");  
    scanf("%d", &binary);
    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d", decimal);
}
int binaryToDecimal(int binary)
{
    int dec=0,i=0,rem;
    while(binary!=0){
        rem=binary % 10;
        binary /= 10;
        dec += rem * pow(2,i);
        i++;
    }
    return dec;
}