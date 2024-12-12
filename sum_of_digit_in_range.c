// wap to find S, which is the sum of digit of all integers in the interval//

#include <stdio.h>
int main()
{
    int l,u;
    printf("Enter lower limit: ");
    scanf("%d", &l);
    printf("Enter upper limit: ");
    scanf("%d", &u);
    int mod;
    int s=0;
    for(int i=l; i<=u; i++)
    {
        int sum = 0;
        int num = i;
        while(num!=0)
        {
            mod = num % 10;
            sum += mod;
            num/=10;
        }
        s+=sum;
    }
    printf("Sum of digits: %d\n", s);
}