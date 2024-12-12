#include <stdio.h>
void maxSweetness(int a[],int n)
{
    int max = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]*a[j] > max)
            {
                max = a[i]*a[j];
            }
        }
    }
    printf("%d",max);
}
int main()
{
    int n=5;
    int arr[]= {1,5,2,5,3};
    maxSweetness(arr,n);
}