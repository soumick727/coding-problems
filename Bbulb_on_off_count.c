#include <stdio.h>
int main()
{
    int arr[] = {0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);
    bulbCount(arr, n);

}
int bulbCount(int arr[], int n)
{
    int bulb = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i] = 1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==0)
                {
                    arr[j] = 1;
                }
                else
                {
                    arr[j] = 0;
                }
            }
            bulb++;
        }
        
    }
    printf("The number of bulbs that are on: %d\n", bulb);
}