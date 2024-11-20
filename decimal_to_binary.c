#include <stdio.h>
int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
}
int decimalToBinary(int decimal)
{
{
    if(decimal==0) return 0;
}
int binary[32];
int index = 0;

while (decimal > 0){
    binary[index] = decimal % 2;
    decimal = decimal / 2;
    index++;
}

printf("Binary representation: ");

for (int i = index-1 ; i >= 0; i--){
    printf("%d", binary[i]);
}
printf("\n");
}