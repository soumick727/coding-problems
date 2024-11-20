#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number in array1: ");
    scanf("%d", &m);
    int array1[m];
    printf("Enter the number in array2: ");
    scanf("%d", &n);
    int array2[n];
    printf("Enter elements of array1: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter elements of array2: ");
    for(int j=0;j<n;j++)
    {
        scanf("%d", &array2[j]);
    }
if(issubset(array1,array2,m,n))
{
    printf("Array 1 is a subset of Array 2.\n");
}
else{
    printf("Array 1 is not a subset of Array 2.\n");
 
}

}

int issubset(int arr1[],int arr2[], int a, int b)
{
    int i,j;
    int count = 0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(arr1[i] == arr2[j])
            {
                break;
            }
        }
        if(j == b)
        return 0;
    }
    return 1;
}