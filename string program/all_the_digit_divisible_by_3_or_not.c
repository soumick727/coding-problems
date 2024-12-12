// Wap in c to take input of an integer...after that u hv to identify all the digit of the input is divisible
// 3 or not...if divisible then print yes otherwise print no
// Sample input 1
// 393
// Output
// Yes
// Sample input 2
// 123
// Output
// Not

#include <stdio.h>

int is3Divisible(int n)
{
    while(n!=0){
        int digit = n%10;
        if(digit%3!=0)
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
}

int main()
{
    int n=369;
    printf(is3Divisible(n)? "Yes\n" : "Not\n");
}