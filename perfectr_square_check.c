#include <stdio.h>
#include <math.h>
int main()
{
    int arr[6] = {64,16,38,81,50,100};
    int ans = is_perfect_square(arr,6);
    printf("Number of perfect squares: %d\n", ans);

}
int is_perfect_square(int arr[],int n){
    int i, j, count = 0;
    for(i = 0; i < n; i++){
        for(j = 1; j <= sqrt(arr[i]); j++){
            if(j*j == arr[i]){
                count++;
                break;
            }
        }
    }
    return count;
}
