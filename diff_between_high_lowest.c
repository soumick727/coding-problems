#include <stdio.h>

int dif_max_min(int a[], int n)
{
    int high,low;
    high=low=a[0];

    for(int i = 0; i < n; i++)
    {
        if(a[i]>high)
        {
            high = a[i];
        }
        if(a[i]<low)
        {
            low = a[i];
        }
    }
    return high - low;
}
int main()
{
    int a[] = {3,4,1,10,8};
    int n = sizeof(a) / sizeof(a[0]);
    int r = dif_max_min(a, n);
    printf("Difference between maximum and minimum elements: %d\n", r);
}