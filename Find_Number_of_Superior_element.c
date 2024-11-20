#include <stdio.h>

int Find_Number_of_Superior_Element(int arr[], int n)
{
    int count = 1;
    int max = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max){
            max = arr[i];
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]= {1,8,5,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = Find_Number_of_Superior_Element(arr, n);
    printf("Number of Superior elements found = %d\n",result);
}