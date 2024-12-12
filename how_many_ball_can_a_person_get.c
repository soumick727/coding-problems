// One person has some balls and he wanted to distribute it to others but the first will get then the second one will get two and thrid one will get three and so on, I have to find out how many peoples I can distribute until he couldnt able to give to next person Sample Input: 7 Sample Output: 3

#include <stdio.h>
int main()
{
    int n = 3;
    int i = 1;
    int count = 0;
    while(n!=0){
        if(n<i)
        {
            break;
        }
        n=n-i;
        i++;
        count+=1;
        
    }
    printf("%d ",count);
}