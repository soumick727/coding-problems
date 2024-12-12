// problem:
// you are given a string str of length n. Your task is to find and print the maximum integer present in the string str.
// Note:
// print -1 if no integer is present 
// print -2 if string is empty

// input format:
// n=39
// str= 33 milestone is either 12 or 74 km away
// output:
// 74

#include <stdio.h>
#include <string.h>


int max_int(char *str){
    if(str==NULL) return -2;
    int max=-1;
    int n = strlen(str);
    for(int i=0; i<n; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            int num = 0;
            while(i<n && str[i]>='0' && str[i]<='9')
            {
                num = num*10 + (str[i]-'0');
                i++;
            }
            if(num>max)
            {
                max = num;
            }
                
        }
    }
    return max;
}
int main()
{
    char str[]="33 milestone is either 12 or 75 km away";
    int max_val = max_int(str);
    if(max_val == -1){
        return -1;
    }
    else{
        printf("%d\n",max_val);
        return 0;
    }

}