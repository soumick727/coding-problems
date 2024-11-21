#include <stdio.h>
void findMinMax(int arr[],int low, int high, int result[])
{
    int mid,leftResult[2],rightResult[2];
    if (low == high) {
        result[0] = result[1] = arr[low];
        return;
    }
    if(low==high-1)
    {
        if(arr[low] < arr[high])
        {
            result[0] = arr[low];
            result[1] = arr[high];
        }
        else
        {
            result[0] = arr[high];
            result[1] = arr[low];
        }
        return;
    }
    else{
        mid = (low+high)/2;
        findMinMax(arr, low, mid, leftResult);
        findMinMax(arr, mid+1, high, rightResult);

        result[0] = (leftResult[0]<rightResult[0])? leftResult[0]:rightResult[0];
        result[1] = (leftResult[1]>rightResult[1])? leftResult[1]:rightResult[1];
    }
}
int main()
{
    int arr[] = {3,5,1,8,2,7,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[2];
    findMinMax(arr,0,n-1,result);
    printf("Minimum element: %d\n", result[0]);
    printf("Maximum element: %d\n", result[1]);
}