#include <stdio.h>

void decToBinary(int n);
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("Decimal: %d -> Binary: ",i);
        decToBinary(i);
    }
}

void decToBinary(int n)
{
   int binary[32];
   int i=0;
   while(n>0)
   {
    binary[i]=n%2;
    n=n/2;
    i++;
   } 

   for(int j=i-1; j>=0; j--)
   {
        printf("%d", binary[j]);
   }
    printf("\n");
}